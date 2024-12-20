# Save as: exercise_cpp1_test.py
import subprocess

def compile_cpp(source, output):
    res = subprocess.run(["g++", source, "-o", output], capture_output=True, text=True)
    if res.returncode != 0:
        raise RuntimeError(f"Compilation failed for {source}:\n{res.stderr}")

def run_executable(exe, input_data=""):
    res = subprocess.run([f"./{exe}"], input=input_data, text=True, capture_output=True)
    if res.returncode != 0:
        raise RuntimeError(f"Running {exe} failed:\n{res.stderr}")
    return res.stdout.strip()

def test_solutions(student_src, student_exe, ref_src, ref_exe):
    # Compile both
    compile_cpp(student_src, student_exe)
    compile_cpp(ref_src, ref_exe)

    # No input needed for this test
    input_data = ""
    student_out = run_executable(student_exe, input_data)
    ref_out = run_executable(ref_exe, input_data)

    if student_out != ref_out:
        raise AssertionError(f"Output mismatch:\nExpected: {ref_out}\nGot: {student_out}")
    print("All tests passed.")

if __name__ == "__main__":
    test_solutions("exercise_cpp1.cpp", "exercise_cpp1_student", "exercise_cpp1_sol.cpp", "exercise_cpp1_ref")