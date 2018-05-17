
        
          def regular?
    !staff?
  end
    
      # Finds the projects belonging to the user in '@user', limited to either
  # public projects or projects visible to the given user.
  #
  # current_user - When given the list of projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
        def root?
      path == 'index'
    end
    
        def add(path, content)
      @pages[path] = content
    end
    
              if %w(Events Sync).include?(type)
            name.prepend 'Backbone.'
          elsif type == 'History'
            name.prepend 'Backbone.history.'
          elsif name == 'extend'
            name.prepend '#{type}.'
          elsif name.start_with? 'constructor'
            name = type
          elsif type != 'Utility'
            name.prepend '#{type.downcase}.'
          end
    
              css('##{dom_id}-methods ~ h4 code').each do |node|
            next unless name = node.content[/\('(\w+)'\)/, 1]
            id = node.parent['id'] = '#{dom_id}-#{name.parameterize}-method'
            name.prepend '#{dom_id.singularize.titleize}: '
            name << ' (method)'
            entries << [name, id]
          end
        end
    
          def get_type
        case slug
        when 'api'
          'Reference'
        when 'configuration'
          'Reference: Configuration'
        when 'stpl'
          'Reference: SimpleTemplate'
        when 'plugindev'
          'Reference: Plugin'
        else
          'Manual'
        end
      end
    
      def remote_url
    object.remote_url.presence
  end
    
        def sass_fn_exists(fn)
      %Q{(#{fn}('') != unquote('#{fn}('')'))}
    end
    
      # Prepend all log lines with the following tags.
  # config.log_tags = [ :subdomain, :uuid ]
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end
    
    desc 'Dumps output to a CSS file for testing'
task :debug do
  require 'sass'
  path = Bootstrap.stylesheets_path
  %w(bootstrap).each do |file|
    engine = Sass::Engine.for_file('#{path}/#{file}.scss', syntax: :scss, load_paths: [path])
    File.open('./#{file}.css', 'w') { |f| f.write(engine.render) }
  end
end