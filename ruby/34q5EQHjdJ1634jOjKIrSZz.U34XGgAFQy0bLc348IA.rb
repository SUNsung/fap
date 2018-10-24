
        
            def set_after_all(platform, block)
      unless after_all_blocks[platform].nil?
        UI.error('You defined multiple `after_all` blocks in your `Fastfile`. The last one being set will be used.')
      end
      after_all_blocks[platform] = block
    end
    
            # Stub out calls related to the execution environment
        client = double('ingester_client')
        session = FastlaneCore::AnalyticsSession.new(analytics_ingester_client: client)
        expect(client).to receive(:post_event).with({
            client_id: p_hash,
            category: 'fastlane Client Langauge - ruby',
            action: :launch,
            label: nil,
            value: nil
        })
    
          it 'handles the exclude_dirs parameter with a single element correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['.bundle'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir .bundle')
      end
    
          it 'works with multiple ignore patterns' do
        pattern1 = 'Pods/*'
        pattern2 = '../**/*/Xcode*'
        result = Fastlane::FastFile.new.parse('lane :test do
          slather({
            ignore: ['#{pattern1}', '#{pattern2}'],
            proj: 'foo.xcodeproj'
          })
        end').runner.execute(:test)
    
          if conflicting_options
        conflicting_options.each do |conflicting_option_key|
          UI.user_error!('Conflicting option key must be a symbol') unless conflicting_option_key.kind_of?(Symbol)
        end
      end
    
              config = FastlaneCore::Configuration.create([name, other, platform], {})
          config.set(:name, 'name1')
          config.set(:other, 'other')
          config.push_values!
    
    invalids = []
Parallel.each(links, in_threads: 4) do |link|
  href = link.attribute('href').to_s
  begin
    case check_link(URI.join(BASE_URI, href))
    when (200...300)
      putc('.')
    when (300..302)
      putc('w')
    end
  rescue => e
    putc('F')
    invalids << '#{href} (reason: #{e.message})'
  end
end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
        protected
    
            # This is called to upgrade this V1 config to V2. The parameter given
        # is the full V2 configuration object, so you can do anything to it
        # that you want.
        #
        # No return value is expected, modifications should be made directly
        # to the new V2 object.
        #
        # @param [V2::Root] new
        def upgrade(new)
        end
    
            include Vagrant::Util
    
              providers
        end
    
              # This is a helper that gets a single machine with the proper
          # provider. The 'proper provider' in this case depends on what was
          # given:
          #
          #   * If a provider was explicitly specified, then use that provider.
          #     But if an active machine exists with a DIFFERENT provider,
          #     then throw an error (for now), since we don't yet support
          #     bringing up machines with different providers.
          #
          #   * If no provider was specified, then use the active machine's
          #     provider if it exists, otherwise use the default provider.
          #
          get_machine = lambda do |name|
            # Check for an active machine with the same name
            provider_to_use = options[:provider]
            provider_to_use = provider_to_use.to_sym if provider_to_use
    
            # This contains all the synced folder implementations by name.
        #
        # @return [Registry<Symbol, Array<Class, Integer>>]
        attr_reader :synced_folders
    
    module Vagrant
  module Plugin
    module V2
      # This class maintains a list of all the registered plugins as well
      # as provides methods that allow querying all registered components of
      # those plugins as a single unit.
      class Manager
        attr_reader :registered
    
      it 'raises a TypeError when passed nil' do
    lambda { srand(nil) }.should raise_error(TypeError)
  end
    
        it 'returns the last access time for the provided file when passed ?A' do
      Kernel.test(?A, @tmp_file).should == @tmp_file.atime
    end
    
      # String arguments should be evaluated in the context of the caller.
  it 'accepts a String argument instead of a Proc or block' do
    trace_var :$Kernel_trace_var_global, '$Kernel_trace_var_extra = true'
    
    if profile_filename = ENV['PROFILE']
  require 'ruby-prof'
  reporter =
    case (profile_extname = File.extname(profile_filename))
    when '.txt'
      RubyProf::FlatPrinterWithLineNumbers
    when '.html'
      RubyProf::GraphHtmlPrinter
    when '.callgrind'
      RubyProf::CallTreePrinter
    else
      raise 'Unknown profiler format indicated by extension: #{profile_extname}'
    end
  File.open(profile_filename, 'w') do |io|
    reporter.new(RubyProf.profile { Pod::Command.run(ARGV) }).print(io)
  end
else
  Pod::Command.run(ARGV)
end

    
        # Checks that the podfile exists.
    #
    # @raise  If the podfile does not exists.
    #
    # @return [void]
    #
    def verify_podfile_exists!
      unless config.podfile
        raise Informative, 'No `Podfile' found in the project directory.'
      end
    end