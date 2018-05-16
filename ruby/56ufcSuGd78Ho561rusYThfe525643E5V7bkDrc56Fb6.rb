  # any user that is either a moderator or an admin
  def staff?
    admin || moderator
  end
    
    class ApplicationSerializer < ActiveModel::Serializer
  embed :ids, include: true
    
      def can_read?(resource)
    ability_name = resource.class.name.downcase
    ability_name = 'read_#{ability_name}'.to_sym
    
      private
    
        find_union(segments, Project).includes(:namespace).order_id_desc
  end
    
        if registration
      u2f.authenticate!(challenges, response, Base64.decode64(registration.public_key), registration.counter)
      registration.update(counter: response.counter)
      true
    end
  rescue JSON::ParserError, NoMethodError, ArgumentError, U2F::Error
    false
  end
end

    
    puts 'Deduping #{links.size} links...'
    
        def log_processed(name)
      puts green '    #{name}'
    end
    
      # Do not fallback to assets pipeline if a precompiled asset is missed.
  config.assets.compile = false
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
      tasks_dir = Pathname.new('lib/capistrano/tasks')
  config_dir = Pathname.new('config')
  deploy_dir = config_dir.join('deploy')