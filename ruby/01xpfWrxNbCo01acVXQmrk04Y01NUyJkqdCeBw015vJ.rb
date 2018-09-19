
        
        if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
      s.add_runtime_dependency('addressable',           '~> 2.4')
  s.add_runtime_dependency('colorator',             '~> 1.0')
  s.add_runtime_dependency('em-websocket',          '~> 0.5')
  s.add_runtime_dependency('i18n',                  '>= 0.9.5', '< 2')
  s.add_runtime_dependency('jekyll-sass-converter', '~> 1.0')
  s.add_runtime_dependency('jekyll-watch',          '~> 2.0')
  s.add_runtime_dependency('kramdown',              '~> 1.14')
  s.add_runtime_dependency('liquid',                '~> 4.0')
  s.add_runtime_dependency('mercenary',             '~> 0.3.3')
  s.add_runtime_dependency('pathutil',              '~> 0.9')
  s.add_runtime_dependency('rouge',                 '~> 3.0')
  s.add_runtime_dependency('safe_yaml',             '~> 1.0')
end

    
                c.action do |_, options|
              options['serving'] = false
              process_with_graceful_fail(c, options, self)
            end
          end
        end
    
            def username
          @username ||= username_and_email[:username].to_s
        end
    
          private
    
          def to_html
        link_to(image_tag(image_url, alt: title), link_url)
      end
    
        # Check if proper Lockable module methods are present & unlock strategy
    # allows to unlock resource on password reset
    def unlockable?(resource)
      resource.respond_to?(:unlock_access!) &&
        resource.respond_to?(:unlock_strategy_enabled?) &&
        resource.unlock_strategy_enabled?(:email)
    end
    
            # Upload a file to the remote machine.
        #
        # @param [String] from Path of the file locally to upload.
        # @param [String] to Path of where to save the file on the remote
        #   machine.
        def upload(from, to)
        end
    
                @logger.info('With machine: #{machine.name} (#{machine.provider.inspect})')
            yield machine
    
    module Vagrant
  module Plugin
    module V2
      # This is the base class for a provider for the V2 API. A provider
      # is responsible for creating compute resources to match the needs
      # of a Vagrant-configured system.
      class Provider
        include CapabilityHost
    
        describe '*' do
      it 'uses the previous argument as the field width' do
        format('%*b', 10, 10).should == '      1010'
        format('%*B', 10, 10).should == '      1010'
        format('%*d', 10, 112).should == '       112'
        format('%*i', 10, 112).should == '       112'
        format('%*o', 10, 87).should == '       127'
        format('%*u', 10, 112).should == '       112'
        format('%*x', 10, 196).should == '        c4'
        format('%*X', 10, 196).should == '        C4'
    
      it 'raises a TypeError when passed a String' do
    lambda { sleep('2')   }.should raise_error(TypeError)
  end
    
    # Declares a dependency to the git repo of CocoaPods gem. This declaration is
# compatible with the local git repos feature of Bundler.
#
def cp_gem(name, repo_name, branch = 'master', path: false)
  return gem name if SKIP_UNRELEASED_VERSIONS
  opts = if path
           { :path => '../#{repo_name}' }
         else
           url = 'https://github.com/CocoaPods/#{repo_name}.git'
           { :git => url, :branch => branch }
         end
  gem name, opts
end
    
    require 'cocoapods'
    
      autoload :AggregateTarget,           'cocoapods/target/aggregate_target'
  autoload :Command,                   'cocoapods/command'
  autoload :Deintegrator,              'cocoapods_deintegrate'
  autoload :Executable,                'cocoapods/executable'
  autoload :ExternalSources,           'cocoapods/external_sources'
  autoload :Installer,                 'cocoapods/installer'
  autoload :HooksManager,              'cocoapods/hooks_manager'
  autoload :PodTarget,                 'cocoapods/target/pod_target'
  autoload :Project,                   'cocoapods/project'
  autoload :Resolver,                  'cocoapods/resolver'
  autoload :Sandbox,                   'cocoapods/sandbox'
  autoload :Target,                    'cocoapods/target'
  autoload :Validator,                 'cocoapods/validator'