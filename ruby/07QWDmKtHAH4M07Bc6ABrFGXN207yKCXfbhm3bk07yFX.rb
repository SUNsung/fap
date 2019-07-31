
        
            def scale_padding(padding)
      if padding.kind_of?(String) && padding.end_with?('%')
        padding = ([image.width, image.height].min * padding.to_f * 0.01).ceil
      end
      multi = 1.0
      multi = 1.7 if self.screenshot.triple_density?
      return padding * multi
    end
    
          def self.details
        [
          'The options are the same as `:enable_services` in the [produce action](https://docs.fastlane.tools/actions/produce/#parameters_1)'
        ].join('\n')
      end
    
        # Returns preferred path for storing cookie
    # for two step verification.
    def persistent_cookie_path
      if ENV['SPACESHIP_COOKIE_PATH']
        path = File.expand_path(File.join(ENV['SPACESHIP_COOKIE_PATH'], 'spaceship', self.user, 'cookie'))
      else
        [File.join(self.fastlane_user_dir, 'spaceship'), '~/.spaceship', '/var/tmp/spaceship', '#{Dir.tmpdir}/spaceship'].each do |dir|
          dir_parts = File.split(dir)
          if directory_accessible?(File.expand_path(dir_parts.first))
            path = File.expand_path(File.join(dir, self.user, 'cookie'))
            break
          end
        end
      end
    
        def detect_configuration_for_archive
      extract_from_scheme = lambda do
        if self.project.workspace?
          available_schemes = self.project.workspace.schemes.reject { |k, v| v.include?('Pods/Pods.xcodeproj') }
          project_path = available_schemes[Gym.config[:scheme]]
        else
          project_path = self.project.path
        end
    
          it 'Both primary and secondary are available, and the secondary is the only one that matches the export type' do
        result = csm.merge_profile_mapping(primary_mapping: { 'identifier.1' => 'Ap-p StoreValue1' },
                                       secondary_mapping: { 'identifier.1' => 'Ad-HocValue' },
                                           export_method: 'app-store')
    
            destinations = devices.map do |d|
          device = find_device(d, os_version)
          if device.nil?
            UI.user_error!('No device found named '#{d}' for version '#{os_version}'') if device.nil?
          elsif device.os_version != os_version
            UI.important('Using device named '#{device.name}' with version '#{device.os_version}' because no match was found for version '#{os_version}'')
          end
          '-destination 'platform=#{os} Simulator,name=#{device.name},OS=#{device.os_version}''
        end
    
          def find_device(device_name, os_version = Snapshot.config[:ios_version])
        # We might get this error message
        # > The requested device could not be found because multiple devices matched the request.
        #
        # This happens when you have multiple simulators for a given device type / iOS combination
        #   { platform:iOS Simulator, id:1685B071-AFB2-4DC1-BE29-8370BA4A6EBD, OS:9.0, name:iPhone 5 }
        #   { platform:iOS Simulator, id:A141F23B-96B3-491A-8949-813B376C28A7, OS:9.0, name:iPhone 5 }
        #
        simulators = FastlaneCore::DeviceManager.simulators
        # Sort devices with matching names by OS version, largest first, so that we can
        # pick the device with the newest OS in case an exact OS match is not available
        name_matches = simulators.find_all { |sim| sim.name.strip == device_name.strip }
                                 .sort_by { |sim| Gem::Version.new(sim.os_version) }
                                 .reverse
        return name_matches.find { |sim| sim.os_version == os_version } || name_matches.first
      end
    
            # if device_name is nil, use the config and get all devices
        os = device_name =~ /^Apple TV/ ? 'tvOS' : 'iOS'
        os_version = Snapshot.config[:ios_version] || Snapshot::LatestOsVersion.version(os)
    
        def upload_mapping(path_to_mapping, apk_version_code)
      ensure_active_edit!
    
        def test_results
      temp_junit_report = Scan.cache[:temp_junit_report]
      return File.read(temp_junit_report) if temp_junit_report && File.file?(temp_junit_report)
    
            # Get App
        app = Spaceship::Application.find(params[:app_identifier])
        unless app
          UI.user_error!('Could not find app with bundle identifier '#{params[:app_identifier]}' on account #{params[:username]}')
        end
    
        class GetVersionNumberAction < Action
      require 'shellwords'
    
        def entries_as_json
      @entries.sort! { |a, b| sort_fn(a.name, b.name) }.map(&:as_json)
    end
    
          def process_response(response)
        super.merge! response_url: response.url
      end
    end
  end
end

    
            doc
      end
    end
  end
end

    
            css('.example-title + pre').each do |node|
          node['name'] = node.previous_element.content.strip
          node.previous_element.remove
        end
    
          def root
        css('.nav-index-group').each do |node|
          if heading = node.at_css('.nav-index-group-heading')
            heading.name = 'h2'
          end
          node.parent.before(node.children)
        end
    
        shared_context 'when user/organization articles exist' do
      let(:organization) { create(:organization) }
      let!(:user_article) { create(:article, user_id: user.id) }
      let!(:organization_article) { create(:article, organization_id: organization.id) }
    end
    
      def define_categories
    cat_info = {
      'collabs': ['Collaborators Wanted', '#5AE8D9'],
      'cfp': ['Call For Proposal', '#f58f8d'],
      'forhire': ['Available For Hire', '#b78cf4'],
      'education': ['Education', '#5AABE8'],
      'jobs': ['Now Hiring', '#53c3ad'],
      'mentors': ['Offering Mentorship', '#A69EE8'],
      'mentees': ['Looking For Mentorship', '#88aedb'],
      'forsale': ['Stuff For Sale', '#d0adfb'],
      'events': ['Upcoming Event', '#f8b3d0'],
      'misc': ['Miscellaneous', '#6393FF'],
      'products': ['Products & Tools', '#5AE8D9']
    }
    @category = cat_info[@listing.category.to_sym][0]
    @cat_color = cat_info[@listing.category.to_sym][1]
  end
end

    
      def legacy_article_social_image(article)
    cache_key = 'article-social-img-#{article}-#{article.updated_at}-#{article.comments_count}'