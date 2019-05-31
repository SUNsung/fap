
        
            # This is the object that used to be in new_object's position
    loc = memory_location(new_tenant)
    assert loc, 'should have a memory location'
    
        t = Time.at(10000000000000000000000)
    assert_equal('<<10000000000000000000000>>', t.strftime('<<%s>>'))
    assert_equal('<<010000000000000000000000>>', t.strftime('<<%24s>>'))
    assert_equal('<<010000000000000000000000>>', t.strftime('<<%024s>>'))
    assert_equal('<< 10000000000000000000000>>', t.strftime('<<%_24s>>'))
  end
    
      find_files = ->(path) {
    Find.find(Pathname.new(path).relative_path_from(Pathname.new Dir.pwd).to_s).map do |path|
      path if File.file?(path)
    end.compact
  }
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
          # private
    
          def mathjax
        @mathjax
      end
    
          locations = Array.new
      while (data.code.to_i == 301 || data.code.to_i == 302)
        data = handle_gist_redirecting(data)
        break if locations.include? data.header['Location']
        locations << data.header['Location']
      end
    
          if File.symlink?(includes_dir)
        return 'Includes directory '#{includes_dir}' cannot be a symlink'
      end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end
    
    Given /^I update my user view to include the attachment$/ do
  steps %{
    Given I overwrite 'app/views/users/show.html.erb' with:
      '''
      <p>Name: <%= @user.name %></p>
      <p>Attachment: <%= image_tag @user.attachment.url %></p>
      '''
  }
end
    
    module RailsCommandHelpers
  def framework_version?(version_string)
    framework_version =~ /^#{version_string}/
  end
    
      def migration_version
    if Rails.version.start_with? '5'
      '[#{Rails::VERSION::MAJOR}.#{Rails::VERSION::MINOR}]'
    end
  end
end

    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end

    
        def possible_types
      MIME::Types.type_for(@filepath).collect(&:content_type)
    end
    
        # Returns the filename, the same way as ':basename.:extension' would.
    def filename attachment, style_name
      [ basename(attachment, style_name), extension(attachment, style_name) ].delete_if(&:empty?).join('.'.freeze)
    end