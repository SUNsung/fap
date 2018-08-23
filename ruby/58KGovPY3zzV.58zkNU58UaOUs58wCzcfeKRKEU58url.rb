
        
            # Exclude cache, logs, and repository, if they are located under the prefix.
    [HOMEBREW_CACHE, HOMEBREW_LOGS, HOMEBREW_REPOSITORY].each do |dir|
      dirs.delete dir.relative_path_from(HOMEBREW_PREFIX).to_s
    end
    dirs.delete 'etc'
    dirs.delete 'var'
    
          if valid_type?(type)
        type.constantize.new(attributes).tap do |instance|
          instance.user = user if instance.respond_to?(:user=)
        end
      else
        const_get(:BASE_CLASS_NAME).constantize.new(attributes).tap do |instance|
          instance.type = type
          instance.user = user if instance.respond_to?(:user=)
        end
      end
    end
  end
end
    
        respond_to do |format|
      format.html { redirect_back events_path, notice: 'Event deleted.' }
      format.json { head :no_content }
    end
  end
    
      config = Merb::Plugins.config[:sass] || Merb::Plugins.config['sass'] || {}
    
            return if (value.nil? && options[:allow_nil]) || (value.blank? && options[:allow_blank])