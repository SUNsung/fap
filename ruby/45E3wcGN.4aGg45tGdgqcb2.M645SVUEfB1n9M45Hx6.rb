
        
                def scaffold_post_content
          ERB.new(File.read(File.expand_path(scaffold_path, site_template))).result
        end
    
            def processed?
          @processed
        end
    
          def site
        @site_drop ||= SiteDrop.new(@obj)
      end
    
          def_delegator :@obj, :cleaned_relative_path, :path
      def_delegator :@obj, :output_ext, :output_ext
    
        def excluded?(entry)
      glob_include?(site.exclude, relative_to_source(entry)).tap do |excluded|
        if excluded
          Jekyll.logger.debug(
            'EntryFilter:',
            'excluded #{relative_to_source(entry)}'
          )
        end
      end
    end
    
        sidekiq_options queue: 'critical'
    
        version '5' do
      self.release = '5.4.0'
      self.base_url = 'https://github.com/d3/'
      self.root_path = 'd3/blob/master/API.md'
    
        version '1.3' do
      self.release = '1.3.4'
      self.base_urls = [
        'https://hexdocs.pm/elixir/#{release}/',
        'https://hexdocs.pm/eex/#{release}/',
        'https://hexdocs.pm/ex_unit/#{release}/',
        'https://hexdocs.pm/iex/#{release}/',
        'https://hexdocs.pm/logger/#{release}/',
        'https://hexdocs.pm/mix/#{release}/',
        'https://elixir-lang.org/getting-started/'
      ]
    end
  end
end

    
        private
    
        def as_json
      { name: name, path: path, type: type }
    end
  end
end

    
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

    
          def stages
        names = Dir[stage_definitions].map { |f| File.basename(f, '.rb') }
        assert_valid_stage_names(names)
        names
      end
    
    desc 'Deploy a new release.'
task :deploy do
  set(:deploying, true)
  %w{ starting started
      updating updated
      publishing published
      finishing finished }.each do |task|
    invoke 'deploy:#{task}'
  end
end
task default: :deploy
