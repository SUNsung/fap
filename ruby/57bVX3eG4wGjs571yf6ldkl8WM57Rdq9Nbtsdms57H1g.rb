
        
            def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
          def parse_uri(location)
        location && URI.parse(location)
      rescue URI::InvalidURIError
        nil
      end
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
    module IRB # :nodoc:
    
          Dir['*.gem'].each do |file|
        begin
          pkg = Gem::Package.new(file)
        rescue SystemCallError, Gem::Package::FormatError
          # ignore
        else
          tup = pkg.spec.name_tuple
          @specs[tup] = [File.expand_path(file), pkg]
    
        def reset
      @command_start = false
      @cmd_state = @command_start
    end
    
                str.each_line do |line|
              if line.end_with?('\n')
                pos[0] += 1
                pos[1] = 0
              else
                pos[1] += line.bytesize
              end
            end
    
      def test_open_r_enc_in_opt
    with_tmpdir {
      generate_file('tmp', '')
      open('tmp', 'r', encoding: 'euc-jp') {|f|
        assert_equal(Encoding::EUC_JP, f.external_encoding)
        assert_equal(nil, f.internal_encoding)
      }
    }
  end
    
          if t > 0.0 and t < isect.t then
        isect.t = t
        isect.hit = true
        isect.pl = Vec.new(ray.org.x + ray.dir.x * t,
                          ray.org.y + ray.dir.y * t,
                          ray.org.z + ray.dir.z * t)
        n = isect.pl.vsub(@center)
        isect.n = n.vnormalize
      else
        0.0
      end
    end
    nil
  end
end
    
    Then(/^directory symlinks are created in the new release$/) do
  pending
  TestApp.linked_dirs.each do |dir|
    run_vagrant_command(test_symlink_exists(TestApp.release_path.join(dir)))
  end
end
    
        [stdout, stderr, status]
  end
    
        require 'capistrano/scm/#{scm_name}'
    install_plugin #{built_in_scm_plugin_class_name}
    
          # Runs all validation rules registered for the given key against the
      # user-supplied value for that variable. If no validator raises an
      # exception, the value is assumed to be valid.
      def assert_valid_now(key, value)
        validators[key].each do |validator|
          validator.call(key, value)
        end
      end
    
    # We use a special :_default_git value so that SCMResolver can tell whether the
# default has been replaced by the user via `set`.
set_if_empty :scm, Capistrano::Configuration::SCMResolver::DEFAULT_GIT
set_if_empty :branch, 'master'
set_if_empty :deploy_to, -> { '/var/www/#{fetch(:application)}' }
set_if_empty :tmp_dir, '/tmp'
    
    module LogStash
  module PluginManager
    class Error < StandardError; end
    
      it 'returns the source' do
    expect(subject.source).to eq(source)
  end
    
          puts user_feedback_string_for('halting', args[:platform], machines, {'experimental' => experimental})
      options = {:debug => ENV['LS_QA_DEBUG']}
    
        context 'update all the plugins' do
      it 'has executed successfully' do
        logstash.run_command_in_path('bin/logstash-plugin update --no-verify')
        expect(logstash).to have_installed?(plugin_name, '0.1.1')
      end
    end
  end
end
