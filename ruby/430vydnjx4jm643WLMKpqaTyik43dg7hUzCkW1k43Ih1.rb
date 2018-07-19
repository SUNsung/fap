
        
              def subscribe(channel, callback, success_callback = nil)
        listener.add_subscriber(channel, callback, success_callback)
      end
    
        person.readers.create(post_id: post.id)
    
      scope :scope_with_lambda, lambda { all }
    
        def connect
      self.current_user = User.new 'lifo'
    end
  end
    
      test '#restart shuts down pub/sub adapter' do
    assert_called(@server.pubsub, :shutdown) do
      @server.restart
    end
  end
end

    
      def regular?
    !staff?
  end
    
      class CachedFragment
    def initialize(json)
      @json = json
    end
    def as_json(*_args)
      @json
    end
  end
    
      def failed_strategy
    request.respond_to?(:get_header) ? request.get_header('omniauth.error.strategy') : request.env['omniauth.error.strategy']
  end
    
          attr_accessor(*VALID_KEYS)
      attr_accessor :pairs
    
              deps.any? do |dep|
            begin
              dep.to_formula.full_name == ff.full_name
            rescue
              dep.name == ff.name
            end
          end
        rescue FormulaUnavailableError
          # Silently ignore this case as we don't care about things used in
          # taps that aren't currently tapped.
          next
        end
      end
    end
    
      output_hash = Digest::SHA256.digest(output) if hash_needed
    
          def create_validating_before_filter(attribute, validator_class, options)
        if_clause = options.delete(:if)
        unless_clause = options.delete(:unless)
        send(:'before_#{attribute}_post_process', :if => if_clause, :unless => unless_clause) do |*args|
          validator_class.new(options.dup).validate(self)
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
