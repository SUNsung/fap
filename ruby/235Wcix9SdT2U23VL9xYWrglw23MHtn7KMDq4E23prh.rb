
        
              users = User.arel_table
      people = Person.arel_table
      profiles = Profile.arel_table
      res = User.joins(person: :profile)
      res = res.where(users[:username].matches('%#{username}%')) unless username.blank?
      res = res.where(users[:email].matches('%#{email}%')) unless email.blank?
      res = res.where(people[:guid].matches('%#{guid}%')) unless guid.blank?
      res = res.where(profiles[:birthday].gt(Date.today-13.years)) if under13 == '1'
      res
    end
  end
end

    
          private
    
          def stage_set?
        !!fetch(:stage, false)
      end
    
        def exit_deploy_because_of_exception(ex)
      warn t(:deploy_failed, ex: ex.message)
      invoke 'deploy:failed'
      exit(false)
    end
    
        # @abstract
    #
    # Your implementation should check the existence of a cache repository on
    # the deployment target
    #
    # @return [Boolean]
    #
    def test
      raise NotImplementedError, 'Your SCM strategy module should provide a #test method'
    end
    
      desc 'Started'
  task :started do
  end
    
        return captured_stdout.string, captured_stderr.string
  ensure
    $stdout = orig_stdout
    $stderr = orig_stderr
  end
end

    
        def script_url_for(gist_id, filename)
      url = 'https://gist.github.com/#{gist_id}.js'
      url = '#{url}?file=#{filename}' unless filename.nil? or filename.empty?
      url
    end
    
        def initialize(tag_name, markup, tokens)
      attributes = ['class', 'src', 'width', 'height', 'title']