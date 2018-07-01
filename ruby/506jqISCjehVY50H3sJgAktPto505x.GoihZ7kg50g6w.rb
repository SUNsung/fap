
        
            class GradleHelper
      # Path to the gradle script
      attr_accessor :gradle_path
    
        def restart!
      without_alive_check do
        puts '--> Restarting #{id} at #{Time.now} <--'
        stop!
        setup!(scheduler, mutex)
        run!
      end
    end
    
                breakable = false
            if e.is_a?(EOFError)
              # An `EOFError` means this IO object is done!
              breakable = true
            elsif defined?(::IO::WaitReadable) && e.is_a?(::IO::WaitReadable)
              # IO::WaitReadable is only available on Ruby 1.9+
    
    module VagrantPlugins
  module CommandCap
    class Command < Vagrant.plugin('2', :command)
      def self.synopsis
        'checks and executes capability'
      end
    
          # Get the publicly-visible URL for an imported file. This URL is used by
      # source maps to link to the source stylesheet. This may return `nil` to
      # indicate that no public URL is available; however, this will cause
      # sourcemap generation to fail if any CSS is generated from files imported
      # from this importer.
      #
      # If an absolute 'file:' URI can be produced for an imported file, that
      # should be preferred to returning `nil`. However, a URL relative to
      # `sourcemap_directory` should be preferred over an absolute 'file:' URI.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param sourcemap_directory [String, NilClass] The absolute path to a
      #   directory on disk where the sourcemap will be saved. If uri refers to
      #   a file on disk that's accessible relative to sourcemap_directory, this
      #   may return a relative URL. This may be `nil` if the sourcemap's
      #   eventual location is unknown.
      # @return [String?] The publicly-visible URL for this file, or `nil`
      #   indicating that no publicly-visible URL exists. This should be
      #   appropriately URL-escaped.
      def public_url(uri, sourcemap_directory)
        return if @public_url_warning_issued
        @public_url_warning_issued = true
        Sass::Util.sass_warn <<WARNING
WARNING: #{self.class.name} should define the #public_url method.
WARNING
        nil
      end
    
            def define_logger(name, options = {})
          class_eval <<-RUBY, __FILE__, __LINE__ + 1
            def #{name}(message)
              #{options.fetch(:to, :log)}(#{name.inspect}, message)
            end
          RUBY
        end
      end
    end
  end
end

    
        def self.definitions_for(klass)
      instance.definitions_for(klass)
    end
    
            def has_column?
          @subject.column_names.include?('#{@attachment_name}_file_name')
        end
      end
    end
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

    
            def matches? subject
          @subject = subject
          @subject = subject.new if subject.class == Class
          error_when_not_valid? && no_error_when_valid?
        end
    
          if defined?(ActiveRecord)
        Paperclip.options[:logger] = ActiveRecord::Base.logger
        ActiveRecord::Base.send(:include, Paperclip::Glue)
      end
    end
  end
end

    
          def invert_add_attachment(args)
        [:remove_attachment, args]
      end
    end
  end
end

    
        module HelperMethods
      # Places ActiveModel validations on the content type of the file
      # assigned. The possible options are:
      # * +content_type+: Allowed content types.  Can be a single content type
      #   or an array.  Each type can be a String or a Regexp. It should be
      #   noted that Internet Explorer uploads files with content_types that you
      #   may not expect. For example, JPEG images are given image/pjpeg and
      #   PNGs are image/x-png, so keep that in mind when determining how you
      #   match.  Allows all by default.
      # * +not+: Forbidden content types.
      # * +message+: The message to display when the uploaded file has an invalid
      #   content type.
      # * +if+: A lambda or name of an instance method. Validation will only
      #   be run is this lambda or method returns true.
      # * +unless+: Same as +if+ but validates if lambda or method returns false.
      # NOTE: If you do not specify an [attachment]_content_type field on your
      # model, content_type validation will work _ONLY upon assignment_ and
      # re-validation after the instance has been reloaded will always succeed.
      # You'll still need to have a virtual attribute (created by +attr_accessor+)
      # name +[attachment]_content_type+ to be able to use this validator.
      def validates_attachment_content_type(*attr_names)
        options = _merge_attributes(attr_names)
        validates_with AttachmentContentTypeValidator, options.dup
        validate_before_processing AttachmentContentTypeValidator, options.dup
      end
    end
  end
end
