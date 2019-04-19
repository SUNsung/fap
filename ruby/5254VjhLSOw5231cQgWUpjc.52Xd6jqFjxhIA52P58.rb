
        
              it 'allows you to force the tag creation' do
        tag = '2.0.0'
        message = 'message'
    
          it 'works with new resolver' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            carthage(
              use_ssh: true,
              use_submodules: true,
              use_binaries: false,
              cache_builds: true,
              platform: 'iOS',
              new_resolver: true
            )
          end').runner.execute(:test)
        end.not_to(raise_error)
      end
    
        it 'adds an environment Hash at the beginning' do
      message = 'A message'
      command = command_from_args({ 'PATH' => '/usr/local/bin' }, 'git', 'commit', '-m', message)
      expect(command).to eq('PATH=/usr/local/bin git commit -m #{message.shellescape}')
    end
    
    # Contributors should always provide a changelog when submitting a PR
if github.pr_body.length < 5
  warn('Please provide a changelog summary in the Pull Request description @#{github.pr_author}')
end
    
          private
    
          require 'sidekiq/extensions/class_methods'
      Module.__send__(:include, Sidekiq::Extensions::Klass)
    end
    
            options = { secret: secret }
        options = options.merge(s.to_hash) if s.respond_to? :to_hash