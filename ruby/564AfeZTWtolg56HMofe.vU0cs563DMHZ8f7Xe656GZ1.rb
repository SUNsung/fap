
        
          # Finds the projects '@user' contributed to, limited to either public projects
  # or projects visible to the given user.
  #
  # current_user - When given the list of the projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
        uninstall quit: 'bundle.id.goes.here'
    
            def run
          UI.puts('$CACHE_ROOT: #{@cache.root}') if @short_output
          if @pod_name.nil? # Print all
            @cache.cache_descriptors_per_pod.each do |pod_name, cache_descriptors|
              print_pod_cache_infos(pod_name, cache_descriptors)
            end
          else # Print only for the requested pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            else
              print_pod_cache_infos(@pod_name, cache_descriptors)
            end
          end
        end
    
            def run
          print_version
          signal_end_of_output
          listen
        end
    
    desc 'copy dot files for deployment'
task :copydot, :source, :dest do |t, args|
  FileList['#{args.source}/**/.*'].exclude('**/.', '**/..', '**/.DS_Store', '**/._*').each do |file|
    cp_r file, file.gsub(/#{args.source}/, '#{args.dest}') unless File.directory?(file)
  end
end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
        # Outputs the post.date as formatted html, with hooks for CSS styling.
    #
    #  +date+ is the date object to format as HTML.
    #
    # Returns string
    def date_to_html_string(date)
      result = '<span class='month'>' + date.strftime('%b').upcase + '</span> '
      result << date.strftime('<span class='day'>%d</span> ')
      result << date.strftime('<span class='year'>%Y</span> ')
      result
    end
    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end