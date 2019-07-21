
        
            should 'not filter entries within include' do
      includes = %w(_index.html .htaccess include*)
      files = %w(index.html _index.html .htaccess includeA)
    
        # Internal
    #
    # Determine if the directory is supposed to contain posts and drafts.
    # If the user has defined a custom collections_dir, then attempt to read
    # posts and drafts only from within that directory.
    #
    # Returns true if a custom collections_dir has been set but current directory lies
    # outside that directory.
    def outside_configured_directory?(dir)
      collections_dir = site.config['collections_dir']
      !collections_dir.empty? && !dir.start_with?('/#{collections_dir}')
    end
    
    def converted_history(markdown)
  remove_head_from_history(
    custom_release_header_anchors(
      liquid_escape(
        linkify(
          normalize_bullets(markdown)
        )
      )
    )
  )
end
    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    $LOAD_PATH.unshift File.expand_path('../lib', __dir__)
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
        def parse_as_fragment
      Nokogiri::HTML.fragment @content, 'UTF-8'
    end
  end
end

    
          max_length = if tag = str.slice!(/ \[.+\]\z/)
        terminal_width - tag.length
      else
        terminal_width
      end
    
            css('img[src]').each do |node|
          node['src'] = node['src'].gsub(%r{angularjs\.org/([\d\.]+)/docs/partials/(\w+)/}, 'angularjs.org/\1/docs/\2/')
        end
    
            new(sandbox, sandbox.root.to_s, pods_project, umbrella_targets_descriptions)
      end
    
        describe Executable::Indenter do
      it 'indents any appended strings' do
        UI.indentation_level = 4
    
            # @private
        # @return [Hash<PodVariant, String>]
        #
        def scope_by_build_type
          scope_if_necessary(group_by { |v| v.build_type.packaging }.map(&:scope_by_linkage)) do |variant|
            variant.build_type.packaging
          end
        end
    
                  FileUtils.expects(:ln_sf).with(relative_path, target_module_path)
              native_target = mock(:build_configurations => [])
              @installer.send(:create_module_map, native_target)
            end
          end
    
          describe '#==' do
        it 'compares equal build types as equal' do
          BuildType.new(:linkage => :dynamic, :packaging => :library).should == BuildType.new(:linkage => :dynamic, :packaging => :library)
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

    
            if deprecated_pods.any?
          UI.section 'The following pods are deprecated:' do
            deprecated_pods.each do |spec|
              if spec.deprecated_in_favor_of
                UI.puts '- #{spec.name}' \
                  ' (in favor of #{spec.deprecated_in_favor_of})'
              else
                UI.puts '- #{spec.name}'
              end
            end
          end
        end
      end
    
            rhs
      end
    end
  end
end

    
      context 'when using inline modifiers' do
    it 'does not register an offense' do
      expect_no_offenses(<<~RUBY)
        class SomeClass
          private def some_method
            puts 10
          end
        end
      RUBY
    end
  end
    
            KEYWORDS = %w[begin class def end module].freeze
        ALLOWED_COMMENTS = %w[:nodoc: :yields: rubocop:disable].freeze
    
          # If converting a string to Ruby string literal source code, must
      # double quotes be used?
      def double_quotes_required?(string)
        # Double quotes are required for strings which either:
        # - Contain single quotes
        # - Contain non-printable characters, which must use an escape
    
          # Checks whether this is a multiline block. This is overridden here
      # because the general version in `Node` does not work for `block` nodes.
      #
      # @return [Boolean] whether the `block` literal is on a several lines
      def multiline?
        !single_line?
      end
    
          # Custom destructuring method. This is used to normalize the branches
      # for `if` and `unless` nodes, to aid comparisons and conversions.
      #
      # @return [Array<Node>] the different parts of the `if` statement
      def node_parts
        if unless?
          condition, false_branch, true_branch = *self
        else
          condition, true_branch, false_branch = *self
        end
    
          # Checks whether the method is an enumerator method.
      #
      # @return [Boolean] whether the method is an enumerator
      def enumerator_method?
        ENUMERATOR_METHODS.include?(method_name) ||
          method_name.to_s.start_with?('each_')
      end