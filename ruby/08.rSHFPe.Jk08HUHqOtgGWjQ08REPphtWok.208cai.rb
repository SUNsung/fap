
        
        HighLine.track_eof = false
    
          describe 'running without fastlane' do
        before do
          allow(FastlaneCore::Helper).to receive(:fastlane_enabled?).and_return(false)
    
            file_name = File.basename(file).gsub('.rb', '')
    
          def self.sample_return_value
        []
      end
    
              # DOCUMENTATION SET INFO
          FastlaneCore::ConfigItem.new(key: :docset_bundle_id, env_name: 'FL_APPLEDOC_DOCSET_BUNDLE_ID', description: 'DocSet bundle identifier', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_bundle_name, env_name: 'FL_APPLEDOC_DOCSET_BUNDLE_NAME', description: 'DocSet bundle name', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_desc, env_name: 'FL_APPLEDOC_DOCSET_DESC', description: 'DocSet description', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_copyright, env_name: 'FL_APPLEDOC_DOCSET_COPYRIGHT', description: 'DocSet copyright message', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_feed_name, env_name: 'FL_APPLEDOC_DOCSET_FEED_NAME', description: 'DocSet feed name', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_feed_url, env_name: 'FL_APPLEDOC_DOCSET_FEED_URL', description: 'DocSet feed URL', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_feed_formats, env_name: 'FL_APPLEDOC_DOCSET_FEED_FORMATS', description: 'DocSet feed formats. Separated by a comma [atom,xml]', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_package_url, env_name: 'FL_APPLEDOC_DOCSET_PACKAGE_URL', description: 'DocSet package (.xar) URL', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_fallback_url, env_name: 'FL_APPLEDOC_DOCSET_FALLBACK_URL', description: 'DocSet fallback URL', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_publisher_id, env_name: 'FL_APPLEDOC_DOCSET_PUBLISHER_ID', description: 'DocSet publisher identifier', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_publisher_name, env_name: 'FL_APPLEDOC_DOCSET_PUBLISHER_NAME', description: 'DocSet publisher name', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_min_xcode_version, env_name: 'FL_APPLEDOC_DOCSET_MIN_XCODE_VERSION', description: 'DocSet min. Xcode version', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_platform_family, env_name: 'FL_APPLEDOC_DOCSET_PLATFORM_FAMILY', description: 'DocSet platform family', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_cert_issuer, env_name: 'FL_APPLEDOC_DOCSET_CERT_ISSUER', description: 'DocSet certificate issuer', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_cert_signer, env_name: 'FL_APPLEDOC_DOCSET_CERT_SIGNER', description: 'DocSet certificate signer', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_bundle_filename, env_name: 'FL_APPLEDOC_DOCSET_BUNDLE_FILENAME', description: 'DocSet bundle filename', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_atom_filename, env_name: 'FL_APPLEDOC_DOCSET_ATOM_FILENAME', description: 'DocSet atom feed filename', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_xml_filename, env_name: 'FL_APPLEDOC_DOCSET_XML_FILENAME', description: 'DocSet xml feed filename', is_string: true, optional: true),
          FastlaneCore::ConfigItem.new(key: :docset_package_filename, env_name: 'FL_APPLEDOC_DOCSET_PACKAGE_FILENAME', description: 'DocSet package (.xar,.tgz) filename', is_string: true, optional: true),
    
      it 'accepts and uses a seed of 0' do
    srand(0)
    srand.should == 0
  end
    
    # If you set this to false, any error raised from within your app will bubble
# up to your step definition and out to cucumber unless you catch it somewhere
# on the way. You can make Rails rescue errors and render error pages on a
# per-scenario basis by tagging a scenario or feature with the @allow-rescue tag.
#
# If you set this to true, Rails will rescue all errors and render error
# pages, more or less in the same way your application would behave in the
# default production environment. It's not recommended to do this for all
# of your scenarios, as this makes it hard to discover errors in your application.
ActionController::Base.allow_rescue = false
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
          def session(env)
        return env[options[:session_key]] if session? env
        fail 'you need to set up a session middleware *before* #{self.class}'
      end
    
    desc 'Start an IRB session with all necessary files required.'
task :shell do |t|
  chdir File.dirname(__FILE__)
  exec 'irb -I lib/ -I lib/paperclip -r rubygems -r active_record -r tempfile -r init'
end
    
    When /^I configure the application to use '([^\']+)' from this project$/ do |name|
  append_to_gemfile 'gem '#{name}', :path => '#{PROJECT_ROOT}''
  steps %{And I successfully run `bundle install --local`}
end
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
        # scale to the requested geometry and preserve the aspect ratio
    def scale_to(new_geometry)
      scale = [new_geometry.width.to_f / self.width.to_f , new_geometry.height.to_f / self.height.to_f].min
      Paperclip::Geometry.new((self.width * scale).round, (self.height * scale).round)
    end
  end
end

    
        def register_new_attachment
      Paperclip::AttachmentRegistry.register(@klass, @name, @options)
    end