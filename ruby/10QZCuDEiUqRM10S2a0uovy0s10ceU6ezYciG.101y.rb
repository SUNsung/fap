
        
          context 'with a user' do
    let(:user) { Fabricate(:user) }
    
      def up
    Photo.joins('INNER JOIN posts ON posts.guid = photos.status_message_guid')
         .where(posts: {type: 'StatusMessage', public: true}).update_all(public: true)
    
    When /^I try to sign in manually$/ do
  manual_login
end
    
      class SendPrivate < Base
    def perform(*_args)
      # don't federate in cucumber
    end
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
    
      def target_file
    target_file = File.join(LogStash::Environment::LOGSTASH_HOME, 'plugins_package')
    '#{target_file}#{file_extension}'
  end
end

    
          # Install the gems to make them available locally when bundler does his local resolution
      post_install_messages = []
      pack.gems.each do |packed_gem|
        PluginManager.ui.debug('Installing, #{packed_gem.name}, version: #{packed_gem.version} file: #{packed_gem.file}')
        post_install_messages << LogStash::PluginManager::GemInstaller::install(packed_gem.file, packed_gem.plugin?)
      end
    
      def execute
    signal_deprecation_warning_for_pack
    
          it 'display a list of installed plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --installed')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
          within_row(1) { click_icon :split }
      wait_for_ajax
      targetted_select2 'LA', from: '#s2id_item_stock_location'
      click_icon :'save-split'
      wait_for_ajax
      expect(page.find('#shipment_#{order.shipments.first.id}')).to be_present
    
              def render_order(result)
            if result.success?
              render_serialized_payload { serialized_current_order }
            else
              render_error_payload(result.error)
            end
          end
    
            def product_params
          params.require(:product).permit(permitted_product_attributes)
        end
    
              if params[:page] || params[:per_page]
            @states = @states.page(params[:page]).per(params[:per_page])
          end
    
        # Build the packaging metadata files.
    checksums = {}
    self.files.each do |f|
      path = staging_path(f)
      if File.symlink?(path)
        checksums[f] = '-'
      elsif File.file?(path)
        checksums[f] = Digest::SHA256.file(path).hexdigest
      end
    end
    
        self.name = [attributes[:npm_package_name_prefix], name].join('-')
    self.version = info.fetch('version', '0.0.0')
    
      def output(output_path)
    
    # Fixup the category to an acceptable solaris category
    case @category
    when nil, 'default'
      @category = 'Applications/System Utilities'
    end
    
        # Add the tar compression flag if necessary
    tar_compression_flag(input_path).tap do |flag|
      args << flag unless flag.nil?
    end
    
        abort 'FPM failed!' unless FPM::Command.new('fpm').run(args) == 0
  end
end
