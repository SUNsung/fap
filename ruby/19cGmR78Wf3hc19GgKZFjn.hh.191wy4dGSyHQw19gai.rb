
        
          def report
    @report ||= JSON.parse(request.body.read)['csp-report'].slice(
      'blocked-uri',
      'disposition',
      'document-uri',
      'effective-directive',
      'original-policy',
      'referrer',
      'script-sample',
      'status-code',
      'violated-directive',
      'line-number',
      'source-file'
    )
  end
    
    end
    
          @directives[directive] ||= []
    
        THEME_SETTING = 'extend_content_security_policy'
    
    require 'builder'
require 'feedbag'
require 'json'
require 'nokogiri'
    
        w.uid = 'git'
    w.gid = 'git'
    
      def failed_order
    params[:order] || 'desc'
  end
    
      it 'exits with Resque::TermException when using TERM_CHILD and not forking' do
    old_job_per_fork = ENV['FORK_PER_JOB']
    begin
      ENV['FORK_PER_JOB'] = 'false'
      worker_pid, child_pid, _result = start_worker(0, true)
      assert_equal worker_pid, child_pid, 'child_pid should equal worker_pid, since we are not forking'
      assert Resque.redis.lpop( 'sigterm-test:ensure_block_executed' ), 'post cleanup did not occur. SIGKILL sent too early?'
    ensure
      ENV['FORK_PER_JOB'] = old_job_per_fork
    end
  end
end
