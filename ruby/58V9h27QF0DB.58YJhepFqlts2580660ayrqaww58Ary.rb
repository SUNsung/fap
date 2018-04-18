
        
            s = nil
    homebrew_site_packages = Language::Python.homebrew_site_packages
    user_site_packages = Language::Python.user_site_packages 'python'
    pth_file = user_site_packages/'homebrew.pth'
    instructions = <<-EOS.undent.gsub(/^/, '  ')
      mkdir -p #{user_site_packages}
      echo 'import site; site.addsitedir('#{homebrew_site_packages}')' >> #{pth_file}
    EOS
    
        def self.cleanup_logs
      return unless HOMEBREW_LOGS.directory?
      HOMEBREW_LOGS.subdirs.each do |dir|
        cleanup_path(dir) { dir.rmtree } if prune?(dir, :days_default => 14)
      end
    end
    
        def merge(hash)
      return super unless hash.is_a? Hash
      dup.merge!(hash)
    end
    
              # Underscore methods
          if name.start_with?('Underscore')
            node.at_css('~ ul').css('li').each do |li|
              name = [type.downcase, li.at_css('a').content.split.first].join('.')
              id = name.parameterize
              li['id'] = id
              entries << [name, id, type]
            end
            next
          end
    
            css('.property-detail').each do |node|
          node.at_css('.property-name')['id'] = node.at_css('a')['id']
        end
    
        s = Set.new(ary) { |o| o * 2 }
    assert_equal([2,4,6], s.sort)
  end
    
      it 'decodes negative Infinity' do
    '\xff\x80\x00\x00'.unpack(unpack_format).should == [-infinity_value]
  end
    
      class Apple < Struct; end
    
      def self.completed_thread
    Thread.new {}
  end
    
        # margin: a -b
    # LESS: sets 2 values
    # Sass: sets 1 value (a-b)
    # This wraps a and -b so they evaluates to 2 values in Sass
    def replace_calculation_semantics(file)
      # split_prop_val.call('(@navbar-padding-vertical / 2) -@navbar-padding-horizontal')
      # #=> ['(navbar-padding-vertical / 2)', '-navbar-padding-horizontal']
      split_prop_val = proc { |val|
        s         = CharStringScanner.new(val)
        r         = []
        buff      = ''
        d         = 0
        prop_char = %r([\$\w\-/\*\+%!])
        while (token = s.scan_next(/([\)\(]|\s+|#{prop_char}+)/))
          buff << token
          case token
            when '('
              d += 1
            when ')'
              d -= 1
              if d == 0
                r << buff
                buff = ''
              end
            when /\s/
              if d == 0 && !buff.strip.empty?
                r << buff
                buff = ''
              end
          end
        end
        r << buff unless buff.empty?
        r.map(&:strip)
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
    
            def rejected_types_rejected?
          @missing_rejected_types ||= @rejected_types.select { |type| type_allowed?(type) }
          @missing_rejected_types.none?
        end
      end
    end
  end
end

    
    module Paperclip
  # Provides helper methods that can be used in migrations.
  module Schema
    COLUMNS = {:file_name    => :string,
               :content_type => :string,
               :file_size    => :integer,
               :updated_at   => :datetime}