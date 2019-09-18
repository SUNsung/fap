
        
                # @return [String] The deployment target.
        #
        attr_reader :platform_deployment_target
    
          # Creates and links an import file for the given pod target and into the given native target.
      #
      # @param  [Project] project
      #         the Xcodeproj to generate the target into.
      #
      # @param  [PBXNativeTarget] target
      #         the native target to link the generated import file into.
      #
      # @param  [PodTarget] pod_target
      #         the pod target to use for when generating the contents of the import file.
      #
      # @param  [Symbol] platform
      #         the platform of the target. Can be `:ios` or `:osx`, etc.
      #
      # @param  [String] name
      #         The name to use for the target, defaults to 'App'.
      #
      # @return [Array<PBXBuildFile>] the created build file references.
      #
      def self.add_app_project_import(project, target, pod_target, platform, name = 'App')
        source_file = AppTargetHelper.create_app_import_source_file(project, pod_target, platform, name)
        group = project[name] || project.new_group(name, name)
        source_file_ref = group.new_file(source_file)
        target.add_file_references([source_file_ref])
      end
    
            # Cleans up projects before writing.
        #
        def cleanup_projects(projects)
          projects.each do |project|
            [project.pods, project.support_files_group,
             project.development_pods, project.dependencies_group].each { |group| group.remove_from_project if group.empty? }
            project.sort(:groups_position => :below)
          end
        end
      end
    end
  end
end

    
      task :index do
    doc = File.read('README.md')
    file = 'doc/rack-protection-readme.md'
    Dir.mkdir 'doc' unless File.directory? 'doc'
    puts 'writing #{file}'
    File.open(file, 'w') { |f| f << doc }
  end
    
          def xor_byte_strings(s1, s2)
        s1.bytes.zip(s2.bytes).map { |(c1,c2)| c1 ^ c2 }.pack('c*')
      end
    end
  end
end

    
          def instrument(env)
        return unless i = options[:instrumenter]
        env['rack.protection.attack'] = self.class.name.split('::').last.downcase
        i.instrument('rack.protection', env)
      end
    
          def is_edit_page
        true
      end
    
          def previous_link
        label = '&laquo; Previous'
        if @page_num == 1
          %(<span class='disabled'>#{label}</span>)
        else
          link = url('/history/#{@page.name}?page=#{@page_num-1}')
          %(<a href='#{link}' hotkey='h'>#{label}</a>)
        end
      end
    
          def has_sidebar
        if @sidebar
          @sidebar.formatted_data.strip.empty? ? false : true
        else
          @sidebar = (@page.sidebar || false)
          !!@sidebar
        end
      end
    
        def self.teardown(&block)
      define_method(:teardown, &block)
    end
  end
  (
  class << klass;
    self
  end).send(:define_method, :name) { name.gsub(/\W/, '_') }
  $contexts << klass
  klass.class_eval &block
end
    
        # TODO: Remove to_url once write_page changes are merged.
    @wiki.write_page('ééééé'.to_url, :markdown, '한글 text', commit_details)
    page = @wiki.page('eeeee')
    assert_equal '한글 text', utf8(page.raw_data)
  end
    
      if cfg = options[:config]
    # If the path begins with a '/' it will be considered an absolute path,
    # otherwise it will be relative to the CWD
    cfg = File.join(Dir.getwd, cfg) unless cfg.slice(0) == File::SEPARATOR
    require cfg
  end
    
        get '/emoji/:name' do
      begin
        [200, {'Content-Type' => 'image/png'}, emoji(params['name'])]
      rescue ArgumentError
        not_found
      end
    end