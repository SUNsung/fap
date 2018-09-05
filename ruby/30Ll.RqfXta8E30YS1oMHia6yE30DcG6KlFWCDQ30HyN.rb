
        
            You can read more about this change at:
      https://www.playframework.com/documentation/2.3.x/Migration23
      https://www.playframework.com/documentation/2.3.x/Highlights23
    EOS
  when 'haskell-platform' then <<-EOS.undent
    We no longer package haskell-platform. Consider installing ghc
    and cabal-install instead:
      brew install ghc cabal-install
    
      # True if a {Formula} is being built without a specific option.
  # <pre>args << '--no-spam-plz' if build.without? 'spam'
  def without?(val)
    !with?(val)
  end
    
        if ARGV.named.empty?
      slow_checks = %w[
        check_for_broken_symlinks
        check_missing_deps
        check_for_outdated_homebrew
        check_for_linked_keg_only_brews
      ]
      methods = (checks.all.sort - slow_checks) + slow_checks
    else
      methods = ARGV.named
    end
    
          GitHub.open 'https://api.github.com/repos/#{user}/homebrew-#{repo}/git/trees/HEAD?recursive=1' do |json|
        json['tree'].each do |object|
          next unless object['type'] == 'blob'
    
          command :revoke_expired do |c|
        c.syntax = 'fastlane cert revoke_expired'
        c.description = 'Revoke expired iOS code signing certificates'
    
      describe ':run option handling' do
    it 'can use the username short flag from tool options' do
      # leaving out the command name defaults to 'run'
      stub_commander_runner_args(['--description', 'My description', '-u', 'me@it.com'])
    
            [
          'This will automatically tag your build with the following format: `<grouping>/<lane>/<prefix><build_number>`, where:'.markdown_preserve_newlines,
          list,
          'For example, for build 1234 in the 'appstore' lane, it will tag the commit with `builds/appstore/1234`.'
        ].join('\n')
      end
    
            unless File.exist?(appium_path)
          UI.user_error!('You have to install Appium using `npm install -g appium`')
        end
    
              style_value = params[:use_automatic_signing] ? 'Automatic' : 'Manual'
          build_configuration_list = found_target[:build_configuration_list]
          build_configuration_list.set_setting('CODE_SIGN_STYLE', style_value)
          sett['ProvisioningStyle'] = style_value
    
    require 'rake/testtask'
Rake::TestTask.new do |t|
  t.libs << 'test'
  t.test_files = FileList['test/**/*_test.rb']
  t.verbose = true
end
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
          def warn_third_party_scm_must_be_upgraded
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] `set :scm, #{scm_name.inspect}` is deprecated.
To ensure this custom SCM will work with future versions of Capistrano,
please upgrade it to a version that uses the new SCM plugin mechanism
documented here:
    
          def primary
        self if fetch(:primary)
      end
    
          private