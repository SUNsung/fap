
        
              ext = @options[:from]
      Sass::Util.glob('#{@options[:input]}/**/*.#{ext}') do |f|
        output =
          if @options[:in_place]
            f
          elsif @options[:output]
            output_name = f.gsub(/\.(c|sa|sc|le)ss$/, '.#{@options[:to]}')
            output_name[0...@options[:input].size] = @options[:output]
            output_name
          else
            f.gsub(/\.(c|sa|sc|le)ss$/, '.#{@options[:to]}')
          end
    
          # If this importer is based on files on the local filesystem This method
      # should return true if the file, when changed, should trigger a
      # recompile.
      #
      # It is acceptable for non-sass files to be watched and trigger a recompile.
      #
      # @param filename [String] The absolute filename for a file that has changed.
      # @return [Boolean] When the file changed should cause a recompile.
      def watched_file?(filename)
        false
      end
    end
  end
end

    
          module ClassMethods
        def inherited(subclass)
          subclass.log_levels = subclass.superclass.log_levels.dup
        end
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
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
    
          Dir.chdir(code_path) do
        code = file.read
        @filetype = file.extname.sub('.','') if @filetype.nil?
        title = @title ? '#{@title} (#{file.basename})' : file.basename
        url = '/#{code_dir}/#{@file}'
        source = '<figure class='code'><figcaption><span>#{title}</span> <a href='#{url}'>download</a></figcaption>\n'
        source += '#{HighlightCode::highlight(code, @filetype)}</figure>'
        TemplateWrapper::safe_wrap(source)
      end
    end
  end
    
    module Jekyll
    
        # Returns the Rails.root constant.
    def rails_root attachment, style_name
      Rails.root
    end
    
            def failure_message_when_negated
          'Attachment #{@attachment_name} should not be required'
        end
        alias negative_failure_message failure_message_when_negated
    
        Hash.new.tap do |missing_styles|
      current_styles.each do |klass, attachment_definitions|
        attachment_definitions.each do |attachment_name, styles|
          registered = registered_styles[klass][attachment_name] || [] rescue []
          missed = styles - registered
          if missed.present?
            klass_sym = klass.to_s.to_sym
            missing_styles[klass_sym] ||= Hash.new
            missing_styles[klass_sym][attachment_name.to_sym] ||= Array.new
            missing_styles[klass_sym][attachment_name.to_sym].concat(missed.to_a)
            missing_styles[klass_sym][attachment_name.to_sym].map!(&:to_s).sort!.map!(&:to_sym).uniq!
          end
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