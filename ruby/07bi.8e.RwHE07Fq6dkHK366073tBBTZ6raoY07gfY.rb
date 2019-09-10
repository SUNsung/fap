
        
              # Pure data class which describes an umbrella target.
      #
      class UmbrellaTargetDescription
        # @return [Xcodeproj::Project] The user project into which this target
        #         is integrated.
        #
        attr_reader :user_project
    
    module Pod
  class PlainInformative
    include CLAide::InformativeError
  end
    
            # @private
        # @return [Hash<PodVariant, String>]
        #
        def scope_by_platform
          grouped_variants = group_by { |v| v.platform.name }
          if grouped_variants.all? { |set| set.variants.count == 1 }
            # => Platform name
            platform_name_proc = proc { |v| Platform.string_name(v.platform.symbolic_name).tr(' ', '') }
          else
            grouped_variants = group_by(&:platform)
            # => Platform name + SDK version
            platform_name_proc = proc { |v| v.platform.to_s.tr(' ', '') }
          end
          scope_if_necessary(grouped_variants.map(&:scope_without_suffix), &platform_name_proc)
        end
    
    module Pod
  module UserInterface
    # Redirects GH-issues delegate callbacks to CocoaPods UI methods.
    #
    class InspectorReporter
      # Called just as the investigation has begun.
      # Lets the user know that it's looking for an issue.
      #
      # @param [query] String unused
      #
      # @param [GhInspector::Inspector] inspector
      #        The current inspector
      #
      # @return [void]
      #
      def inspector_started_query(_, inspector)
        UI.puts 'Looking for related issues on #{inspector.repo_owner}/#{inspector.repo_name}...'
      end
    
            get '/pipelines' do
          opts = {:graph => as_boolean(params.fetch('graph', false)),
                  :vertices => as_boolean(params.fetch('vertices', false))}
          payload = node.pipelines(opts)
          halt(404) if payload.empty?
          respond_with(:pipelines => payload )
        end
    
    ::Bundler.with_friendly_errors do
  ::Bundler::CLI.start(ARGV, :debug => true)
end

    
    require 'clamp'
require 'pluginmanager/util'
require 'pluginmanager/gemfile'
require 'pluginmanager/install'
require 'pluginmanager/remove'
require 'pluginmanager/list'
require 'pluginmanager/update'
require 'pluginmanager/pack'
require 'pluginmanager/unpack'
require 'pluginmanager/generate'
require 'pluginmanager/prepare_offline_pack'
require 'pluginmanager/proxy_support'
configure_proxy
    
          options = {:debug => ENV['LS_QA_DEBUG']}
      puts 'Destroying #{machines}'
      LogStash::VagrantHelpers.destroy(machines, options)
      puts 'Bootstrapping #{machines}'
      LogStash::VagrantHelpers.bootstrap(machines, options)
    end
    
          context 'the getter' do
        before do
          subject.send('#{item}=', value)
        end
        it 'returns the value set previously' do
          expect(subject.send(item)).to(be == value)
        end
      end
    end
  end
    
          # Scan to find the location of the two contiguous null records
      open(target_path, 'rb') do |file|
    
        @session.save_and_open_screenshot(custom_path)
    
        @session.save_screenshot
    
        it 'happily clicks on links which incorrectly have the disabled attribute' do
      @session.visit('/with_html')
      @session.click_link_or_button('Disabled link')
      expect(@session).to have_content('Bar')
    end
  end
    
      it 'should not raise an exception if the current_url is nil' do
    allow(@session).to receive(:current_url).and_return(nil)
    allow(@session.page).to receive(:current_url).and_return(nil) if @session.respond_to? :page
    
      it 'allows Regexp for value matching' do
    expect(@session.find(:css, '#first')).to match_style(display: /^bl/)
    expect(@session.find(:css, '#first').matches_style?('display' => /^bl/)).to be true
    expect(@session.find(:css, '#first').matches_style?(display: /^in/)).to be false
  end
    
              filter_context(ctx).instance_exec(subject, value, **options, &@block)
        end
      end
    end
  end
end

    
      it 'should raise when unused parameters are passed' do
    expect do
      @session.first(:css, 'h1', 'unused text')
    end.to raise_error ArgumentError, /Unused parameters passed.*unused text/
  end