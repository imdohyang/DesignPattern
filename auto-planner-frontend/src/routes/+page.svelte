<script>
  // 동작 없음 (디자인용)
</script>

<style>
  .wrapper {
    display: flex;
    flex-direction: column;
    height: 100vh;
    background-color: #f3f4f6;
  }

  .header {
    display: flex;
    align-items: center;
    padding: 1rem 2rem;
    border-bottom: 1px solid #e5e7eb;
    font-weight: bold;
    font-size: 1.2rem;
    gap: 0.5rem;
  }

  .content {
    flex: 1;
    display: flex;
    justify-content: center;
    align-items: center;
  }

  .login-box {
    background: white;
    padding: 2rem;
    width: 360px;
    border-radius: 8px;
    box-shadow: 0 2px 10px rgba(0,0,0,0.1);
    text-align: center;
  }

  .login-box img {
    width: 60px;
    height: 60px;
    margin-bottom: 1rem;
  }

  .login-box h2 {
    font-size: 1.25rem;
    margin-bottom: 0.25rem;
  }

  .login-box p {
    font-size: 0.875rem;
    color: #6b7280;
    margin-bottom: 1.5rem;
  }

  input[type="text"], input[type="password"] {
    width: 100%;
    padding: 0.5rem;
    margin-bottom: 1rem;
    border: 1px solid #ccc;
    border-radius: 4px;
  }

  .options {
    display: flex;
    justify-content: space-between;
    align-items: center;
    font-size: 0.875rem;
    margin-bottom: 1rem;
  }

  button {
    background-color: #1f2937;
    color: white;
    border: none;
    width: 100%;
    padding: 0.5rem;
    border-radius: 4px;
    font-weight: bold;
    margin-bottom: 1rem;
    cursor: pointer;
  }

  .divider {
    height: 1px;
    background-color: #e5e7eb;
    margin: 1rem 0;
  }

  .footer {
    font-size: 0.875rem;
  }

  .footer a {
    display: block;
    color: #1f2937;
    text-decoration: underline;
    cursor: pointer;
    margin-top: 0.25rem;
  }
</style>

<div class="wrapper">
  <div class="header">
    <img src="/favicon.png" alt="logo" width="24" height="24" />
    AutoPlanner
  </div>
  <div class="content">
    <div class="login-box">
      <img src="https://www.svgrepo.com/show/382106/profile-user.svg" alt="user icon" />
      <h2>환영합니다</h2>
      <p>AutoPlanner에 로그인 하세요</p>

      <div>
        <label>아이디</label>
        <input type="text" placeholder="아이디를 입력하세요" />
      </div>
      <div>
        <label>비밀번호</label>
        <input type="password" placeholder="비밀번호를 입력하세요" />
      </div>

      <div class="options">
        <label><input type="checkbox" /> 로그인 상태 유지</label>
        <span style="cursor:pointer; text-decoration: underline; color: #1f2937;">비밀번호 찾기</span>
      </div>

      <button>로그인</button>

      <div class="divider"></div>
      <div class="footer">
        <p>계정이 없으신가요?</p>
        <a>회원가입</a>
      </div>
    </div>
  </div>
</div>
