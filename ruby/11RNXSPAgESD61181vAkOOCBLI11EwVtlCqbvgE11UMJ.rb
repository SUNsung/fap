
        
            def resource_params
      params.require(:email_domain_block).permit(:domain)
    end
  end
end

    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
      def update
    if subscription.verify(body, request.headers['HTTP_X_HUB_SIGNATURE'])
      ProcessingWorker.perform_async(@account.id, body.force_encoding('UTF-8'))
    end
    
      def setting
    @_setting ||= ::Web::Setting.where(user: current_user).first_or_initialize(user: current_user)
  end
end

    
      def user_needs_sign_in_update?
    user_signed_in? && (current_user.current_sign_in_at.nil? || current_user.current_sign_in_at < UPDATE_SIGN_IN_HOURS.hours.ago)
  end
end

    
      # Parses the given Ruby program read from +src+.
  # +src+ must be a String or an IO or a object with a #gets method.
  def Ripper.parse(src, filename = '(ripper)', lineno = 1)
    new(src, filename, lineno).parse
  end
    
        assert_equal Float::INFINITY, (1...).size
    assert_equal Float::INFINITY, (1.0...).size
    assert_equal Float::INFINITY, (...1).size
    assert_equal Float::INFINITY, (...1.0).size
    assert_nil ('a'...).size
  end
    
    def mkpieces
  piece(0,[],[0])
  $p.each do |a|
    a0 = a[0]
    a[1] = ud(a0)
    a[2] = rl(a0)
    a[3] = ud(rl(a0))
    a[4] = xy(a0)
    a[5] = ud(xy(a0))
    a[6] = rl(xy(a0))
    a[7] = ud(rl(xy(a0)))
    a.sort!
    a.uniq!
  end
  $p.uniq!.sort! {|x,y| x[0] <=> y[0] }
end
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
        (stdout + stderr).each_line { |line| puts '[vagrant] #{line}' }
    
          def echo?
        (options || {}).fetch(:echo, true)
      end
    end
  end
end

    
          def trusted?
        @trusted
      end
    
    # We use a special :_default_git value so that SCMResolver can tell whether the
# default has been replaced by the user via `set`.
set_if_empty :scm, Capistrano::Configuration::SCMResolver::DEFAULT_GIT
set_if_empty :branch, 'master'
set_if_empty :deploy_to, -> { '/var/www/#{fetch(:application)}' }
set_if_empty :tmp_dir, '/tmp'