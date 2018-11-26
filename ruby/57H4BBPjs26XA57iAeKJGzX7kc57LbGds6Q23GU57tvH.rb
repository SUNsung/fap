
        
          context 'single action execution' do
    let(:action_name) { 'some_action' }
    
            expect(result).to eq('carthage archive')
      end
    
          it 'Handles tag names with characters that need shell escaping' do
        tag = 'v1.8.0(30)'
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits(between: ['#{tag}', 'HEAD'])
        end').runner.execute(:test)
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path[0]} #{path[1]}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: #{path})
          end').runner.execute(:test)
        end
      end
    
    class String
  # CrossplatformShellwords
  def shellescape
    CrossplatformShellwords.shellescape(self)
  end
end
    
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

    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
        def log_processed(name)
      puts green '    #{name}'
    end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
    LogStash::Bundler.setup!