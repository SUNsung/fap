
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
      dest.ascend do |f|
    break if f == source
    paths.unshift f.to_s
  end
    
            true
      else
        false
      end
    end
    
          { :title => 'Event', :entries => present_hash(payload) }
    else
      { :title => payload.to_s, :entries => [] }
    end
  end
    
      module SortableTableHelper
    # :call-seq:
    #   sortable_column(attribute, default_direction = 'desc', name: attribute.humanize)
    def sortable_column(attribute, default_direction = nil, options = nil)
      if options.nil? && (options = Hash.try_convert(default_direction))
        default_direction = nil
      end
      default_direction ||= 'desc'
      options ||= {}
      name = options[:name] || attribute.humanize
      selected = @table_sort_info[:attribute].to_s == attribute
      if selected
        direction = @table_sort_info[:direction]
        new_direction = direction.to_s == 'desc' ? 'asc' : 'desc'
        classes = 'selected #{direction}'
      else
        classes = ''
        new_direction = default_direction
      end
      link_to(name, url_for(sort: '#{attribute}.#{new_direction}'), class: classes)
    end
  end
end

    
      def destroy
    @event.destroy
    
          options[:container] = '.container'
    end
  end
end

    
        options[:skip] = %w(book/first-edition/README.html)
    options[:skip_patterns] = [/(?<!\.html)\z/]
    
            css('code').each do |node|
          node.inner_html = node.inner_html.squish
        end
    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
    Liquid::Template.register_tag('video', Jekyll::VideoTag)
    
        if as == :json
      if api_error?(data)
        data = generate_error_hash(data)
      else
        selected_fields = extract_fields(filter.to_s.strip)
        data.select! { |k,v| selected_fields.include?(k) } unless selected_fields.empty?
        unless options.include?(:exclude_default_metadata)
          data = data.to_hash
          if data.values.size == 0 && selected_fields.size > 0
            raise LogStash::Api::NotFoundError
          end
          data = default_metadata.merge(data)
        end
      end
    
          # Skip this file if the output file is the same size
      if entry.directory?
        FileUtils.mkdir_p(path) unless File.directory?(path)
      else
        entry_mode = entry.instance_eval { @mode } & 0777
        if File.exists?(path)
          stat = File.stat(path)
          # TODO(sissel): Submit a patch to archive-tar-minitar upstream to
          # expose headers in the entry.
          entry_size = entry.instance_eval { @size }
          # If file sizes are same, skip writing.
          next if stat.size == entry_size && (stat.mode & 0777) == entry_mode
        end
        puts 'Extracting #{entry.full_name} from #{tarball} #{entry_mode.to_s(8)}'
        File.open(path, 'w') do |fd|
          # eof? check lets us skip empty files. Necessary because the API provided by
          # Archive::Tar::Minitar::Reader::EntryStream only mostly acts like an
          # IO object. Something about empty files in this EntryStream causes
          # IO.copy_stream to throw 'can't convert nil into String' on JRuby
          # TODO(sissel): File a bug about this.
          while !entry.eof?
            chunk = entry.read(16384)
            fd.write(chunk)
          end
            #IO.copy_stream(entry, fd)
        end
        File.chmod(entry_mode, path)
      end
    end
    tar.close
    File.unlink(tarball) if File.file?(tarball)
  end # def untar
    
        def initialize(klass, name, options)
      @klass = klass
      @name = name
      @options = options
    end
    
            def lower_than_high?
          @high.nil? || @high == Float::INFINITY || passes_validation_with_size(@high - 1)
        end
    
          def check_validity!
        unless options.has_key?(:content_type) || options.has_key?(:not)
          raise ArgumentError, 'You must pass in either :content_type or :not to the validator'
        end
      end
    end