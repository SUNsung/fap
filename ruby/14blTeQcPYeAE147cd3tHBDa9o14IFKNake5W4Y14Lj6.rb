
        
            context 'when #possible_javas contains paths' do
      let(:path) { mktmpdir }
      let(:java) { path/'java' }
    
            version < minimum_version
      end
    
        def fetch
      downloader.fetch
      @downloaded_path = downloader.cached_location
    rescue => e
      error = CaskError.new('Download failed on Cask '#{cask}' with message: #{e}')
      error.set_backtrace e.backtrace
      raise error
    end
    
    def fixture_pod_target(spec_or_name, host_requires_frameworks = false, user_build_configurations = {}, archs = [],
                       platform = Pod::Platform.new(:ios, '6.0'), target_definitions = [], scope_suffix = nil, build_type: nil)
  spec = spec_or_name.is_a?(Pod::Specification) ? spec_or_name : fixture_spec(spec_or_name)
  fixture_pod_target_with_specs([spec], host_requires_frameworks, user_build_configurations, archs, platform,
                                target_definitions, scope_suffix, :build_type => build_type)
end
    
          def initialize(source_path, dsym_path = nil, bcsymbolmap_paths = nil)
        @source_path = source_path
        @dsym_path = dsym_path
        @bcsymbolmap_paths = bcsymbolmap_paths
      end
    
      def permitted_attributes
    %i[title body_html body_markdown main_image published canonical_url
       description allow_small_edits allow_big_edits tag_list publish_under_org
       video video_code video_source_url video_thumbnail_url receive_notifications
       archived]
  end
    
    desc 'Start an IRB session with all necessary files required.'
task :shell do |t|
  chdir File.dirname(__FILE__)
  exec 'irb -I lib/ -I lib/paperclip -r rubygems -r active_record -r tempfile -r init'
end
    
    Given /^I run a paperclip generator to add a paperclip '([^']*)' to the '([^']*)' model$/ do |attachment_name, model_name|
  step %[I successfully run `rails generate paperclip #{model_name} #{attachment_name}`]
end