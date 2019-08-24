
        
            def str_to_byte_pos(pos)
      @s.string.slice(0, pos).bytesize
    end
  end
end
    
      def test_font_helper_with_suffix_sharp
    assert_match %r(url\(['']?/assets/.*svg#.+['']?\)), @css
  end
    
      def contacts_by_type(type)
    order = ['profiles.first_name ASC', 'profiles.last_name ASC', 'profiles.diaspora_handle ASC']
    contacts = case type
      when 'all'
        order.unshift 'receiving DESC'
        current_user.contacts
      when 'only_sharing'
        current_user.contacts.only_sharing
      when 'receiving'
        current_user.contacts.receiving
      when 'by_aspect'
        order.unshift 'contact_id IS NOT NULL DESC'
        contacts_by_aspect(@aspect.id)
      else
        raise ArgumentError, 'unknown type #{type}'
      end
    contacts.includes(person: :profile)
            .order(order)
  end
    
      private
    
      task :rollback_release_path do
    on release_roles(:all) do
      releases = capture(:ls, '-xt', releases_path).split
      if releases.count < 2
        error t(:cannot_rollback)
        exit 1
      end
    
      def vagrant_cli_command(command)
    puts '[vagrant] #{command}'
    stdout, stderr, status = Dir.chdir(VAGRANT_ROOT) do
      Open3.capture3('#{VAGRANT_BIN} #{command}')
    end
    
            filter = Object.new
        def filter.filter(servers)
          block.call(servers)
        end
      elsif !filter.respond_to? :filter
        raise TypeError, 'Provided custom filter <#{filter.inspect}> does ' \
                         'not have a public 'filter' method'
      end
      @custom_filters ||= []
      @custom_filters << filter
    end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
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