    def error?
      code == 0 || code != 404 && code != 403 && code >= 400 && code <= 599
    end
    
        def justify(str)
      return str unless terminal_width
      str = str.dup
    
        def resource_params
      params.require(:user).permit(
        :unconfirmed_email
      )
    end
  end
end

    
    class Api::OEmbedController < Api::BaseController
  respond_to :json
    
      def hub_mode
    params['hub.mode']
  end
    
    require 'bootstrap/environment'
    
            if explicit_plugins.any? { |spec| filename =~ /^#{spec.name}/ }
          FileUtils.mv(gem_file, ::File.join(explicit_path, filename))
        else
          FileUtils.mv(gem_file, ::File.join(dependencies_path, filename))
        end
      end
    end
    
        validate_target_file
    LogStash::Bundler.invoke!({:package => true, :all => true})
    archive_manager.compress(LogStash::Environment::CACHE_PATH, target_file)
    FileUtils.rm_rf(LogStash::Environment::CACHE_PATH) if clean?
    
      parameter 'file', 'the package file name', :attribute_name => :package_file, :required => true
    
      # retrieve only the latest spec for all locally installed plugins
  # @return [Hash] result hash {plugin_name.downcase => plugin_spec}
  def find_latest_gem_specs
    LogStash::PluginManager.all_installed_plugins_gem_specs(gemfile).inject({}) do |result, spec|
      previous = result[spec.name.downcase]
      result[spec.name.downcase] = previous ? [previous, spec].max_by{|s| s.version} : spec
      result
    end
  end
end
