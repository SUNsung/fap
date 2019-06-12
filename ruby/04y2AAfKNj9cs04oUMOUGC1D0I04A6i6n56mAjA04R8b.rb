
        
              def self.is_supported?(platform)
        true
      end
    end
  end
end

    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            grouping: 'grouping',
            build_number: 'build_number',
            prefix: 'prefix',
          })
        end').runner.execute(:test)
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --ignore \'ignored/path\' --exit-threshold \'2\' input/dir')
      end
    
          it 'sets the configuration to Release' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              configuration: 'Release'
            )
          end').runner.execute(:test)
    
        context 'with a postfix block' do
      it 'yields the status, result and command' do
        expect_command('ls', '-la')
        Fastlane::Actions.sh('ls', '-la') do |status, result, command|
          expect(status.exitstatus).to eq(0)
          expect(result).to be_empty
          expect(command).to eq('ls -la')
        end
      end
    
          it 'should not be fooled by 10 local code signing identities available' do
        allow(FastlaneCore::CertChecker).to receive(:wwdr_certificate_installed?).and_return(true)
        allow(FastlaneCore::CertChecker).to receive(:list_available_identities).and_return('     10 valid identities found\n')
        expect(FastlaneCore::UI).not_to(receive(:error))
    
    def expect_correct_implementation_to_be_called(obj, method, os)
  if method == :shellescape
    # String.shellescape => CrossplatformShellwords.shellescape => ...
    expect(obj).to receive(:shellescape).and_call_original
    expect(CrossplatformShellwords).to receive(:shellescape).with(obj).and_call_original
    if os == 'windows'
      # WindowsShellwords.shellescape
      expect(WindowsShellwords).to receive(:shellescape).with(obj).and_call_original
      expect(Shellwords).not_to(receive(:escape))
    else
      # Shellswords.escape
      expect(Shellwords).to receive(:escape).with(obj).and_call_original
      expect(WindowsShellwords).not_to(receive(:shellescape))
    end
  elsif method == :shelljoin
    # Array.shelljoin => CrossplatformShellwords.shelljoin => CrossplatformShellwords.shellescape ...
    expect(obj).to receive(:shelljoin).and_call_original
    expect(CrossplatformShellwords).to receive(:shelljoin).with(obj).and_call_original
    expect(CrossplatformShellwords).to receive(:shellescape).at_least(:once).and_call_original
  end
end

    
            def preload_stages_warnings
          # This preloads the number of warnings for every stage, ensuring
          # that Ci::Stage#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.stages.each { |stage| stage.number_of_warnings }
        end
      end
    end
  end
end

    
          def verify_ssl
        github_omniauth_provider.fetch('verify_ssl', true)
      end
    
            # issue - An instance of `Gitlab::GithubImport::Representation::Issue`
        # project - An instance of `Project`
        # client - An instance of `Gitlab::GithubImport::Client`
        def initialize(issue, project, client)
          @issue = issue
          @project = project
          @client = client
          @label_finder = LabelFinder.new(project)
        end
    
          def action_for_rails(env)
        controller = env[CONTROLLER_KEY]
        action = '#{controller.class.name}##{controller.action_name}'