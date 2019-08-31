
        
            alias_method :blank?, :empty?
    
          def additional_options
        if self.class.internal_urls
          super.merge! \
            only: self.class.internal_urls.to_set,
            only_patterns: nil,
            skip: nil,
            skip_patterns: nil,
            skip_links: nil,
            fixed_internal_urls: true
        else
          super
        end
      end
    
        def process_response?(response)
      if response.error?
        raise <<~ERROR
          Error status code (#{response.code}): #{response.return_message}
          #{response.url}
          #{JSON.pretty_generate(response.headers).slice(2..-3)}
        ERROR
      elsif response.blank?
        raise 'Empty response body: #{response.url}'
      end
    
              node.before(node.children).remove
        end
    
    Then(/^the failure task will not run$/) do
  failed = TestApp.shared_path.join('failed')
  expect { run_vagrant_command(test_file_exists(failed)) }
    .to raise_error(VagrantHelpers::VagrantSSHCommandError)
end
    
            private
    
          # Internal use only.
      def peek(key, default=nil, &block)
        value = fetch_for(key, default, &block)
        while callable_without_parameters?(value)
          value = (values[key] = value.call)
        end
        value
      end
    
        context 'update all the plugins' do
      it 'has executed successfully' do
        logstash.run_command_in_path('bin/logstash-plugin update --no-verify')
        expect(logstash).to have_installed?(plugin_name, '0.1.1')
      end
    end
  end
end

    
    # usage rake new_page[my-new-page] or rake new_page[my-new-page.html] or rake new_page (defaults to 'new-page.markdown')
desc 'Create a new page in #{source_dir}/(filename)/index.#{new_page_ext}'
task :new_page, :filename do |t, args|
  raise '### You haven't set anything up yet. First run `rake install` to set up an Octopress theme.' unless File.directory?(source_dir)
  args.with_defaults(:filename => 'new-page')
  page_dir = [source_dir]
  if args.filename.downcase =~ /(^.+\/)?(.+)/
    filename, dot, extension = $2.rpartition('.').reject(&:empty?)         # Get filename and extension
    title = filename
    page_dir.concat($1.downcase.sub(/^\//, '').split('/')) unless $1.nil?  # Add path to page_dir Array
    if extension.nil?
      page_dir << filename
      filename = 'index'
    end
    extension ||= new_page_ext
    page_dir = page_dir.map! { |d| d = d.to_url }.join('/')                # Sanitize path
    filename = filename.downcase.to_url
    
        # Creates an instance of CategoryIndex for each category page, renders it, and
    # writes the output to a file.
    #
    #  +category_dir+ is the String path to the category folder.
    #  +category+     is the category currently being processed.
    def write_category_index(category_dir, category)
      index = CategoryIndex.new(self, self.source, category_dir, category)
      index.render(self.layouts, site_payload)
      index.write(self.dest)
      # Record the fact that this page has been added, otherwise Site::cleanup will remove it.
      self.pages << index
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end