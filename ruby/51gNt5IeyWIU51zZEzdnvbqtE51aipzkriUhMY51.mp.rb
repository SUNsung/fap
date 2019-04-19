
        
        describe GivenDailyLike do
    
          it 'add a cache_builds flag to command if cache_builds is set to true' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              cache_builds: true
            )
          end').runner.execute(:test)
    
          it 'handles the extensions parameter with a single element correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: ['m'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.m')
      end
    
          it 'passes the deprecated pathspec parameter to path parameter' do
        with_verbose(true) do
          allow(Fastlane::Actions).to receive(:sh).with(anything, { log: true }).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(pathspec: 'myfile.txt')
          end').runner.execute(:test)
        end
      end
    
              expect(result).to eq('swiftlint autocorrect')
        end
      end
    
        # An empty argument will be skipped, so return empty quotes.
    # https://github.com/ruby/ruby/blob/a6413848153e6c37f6b0fea64e3e871460732e34/lib/shellwords.rb#L142-L143
    return ''''.dup if str.empty?
    
        it 'has a default when the result is empty' do
      expect(AgentsExporter.new(:name => '').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => 'Ə').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => '-').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => ',,').filename).to eq('exported-agents.json')
    end
  end
    
        it 'should require the basecamp project_id' do
      @checker.options['project_id'] = nil
      expect(@checker).not_to be_valid
    end
    
    Then(/^the invalid (.+) release is ignored$/) do |filename|
  test = 'ls -g #{TestApp.releases_path} | grep #{filename}'
  _, _, status = vagrant_cli_command('ssh -c #{test.shellescape}')
  expect(status).to be_success
end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
        def handle_options
      options.rakelib = ['rakelib']
      options.trace_output = $stderr
    
        def remove(key, *values)
      set(key, Array(fetch(key)) - values)
    end
    
          # rubocop:disable Style/GuardClause
      def register_legacy_scm_hooks
        if Rake::Task.task_defined?('deploy:new_release_path')
          after 'deploy:new_release_path', '#{scm_name}:create_release'
        end
    
    def blog_url(user, project, source_dir)
  cname = '#{source_dir}/CNAME'
  url = if File.exists?(cname)
    'http://#{IO.read(cname).strip}'
  else
    'http://#{user.downcase}.github.io'
  end
  url += '/#{project}' unless project == ''
  url
end
    
    ERR
      end
    end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end
    
    