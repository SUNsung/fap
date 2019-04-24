
        
                def render(&block)
          options = @options.stringify_keys
          tag_value = options.delete('value')
          name_and_id = options.dup
    
          test 'when text is rendered, render no layout' do
        controller = WithString.new
        controller.process(:overwrite_skip)
        assert_equal 'Hello text!', controller.response_body
      end
    
            def preload_stages_warnings
          # This preloads the number of warnings for every stage, ensuring
          # that Ci::Stage#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.stages.each { |stage| stage.number_of_warnings }
        end
      end
    end
  end
end

    
          # Reads a cache key.
      #
      # If the key exists and has a non-empty value its TTL is refreshed
      # automatically.
      #
      # raw_key - The cache key to read.
      # timeout - The new timeout of the key if the key is to be refreshed.
      def self.read(raw_key, timeout: TIMEOUT)
        key = cache_key_for(raw_key)
        value = Redis::Cache.with { |redis| redis.get(key) }
    
              issue.label_names.each do |label_name|
            # Although unlikely it's technically possible for an issue to be
            # given a label that was created and assigned after we imported all
            # the project's labels.
            next unless (label_id = label_finder.id_for(label_name))
    
          def cache_key_iid
        if object.respond_to?(:noteable_id)
          object.noteable_id
        elsif object.respond_to?(:iid)
          object.iid
        else
          raise(
            TypeError,
            'Instances of #{object.class} are not supported'
          )
        end
      end
    end
  end
end

    
    module Gitlab
  module GithubImport
    module ParallelScheduling
      attr_reader :project, :client, :page_counter, :already_imported_cache_key
    
            def issuable_type
          pull_request? ? 'MergeRequest' : 'Issue'
        end
      end
    end
  end
end

    
        if notice
      set_flash_message! :notice, notice
      true
    end
  end
    
          def add_fragment_back_to_path(uri, path)
        [path, uri.fragment].compact.join('#')
      end
    end
  end
end

    
        # Gives the class the mapping points to.
    def to
      @klass.get
    end
    
          def remember_me!
        self.remember_token ||= self.class.remember_token if respond_to?(:remember_token)
        self.remember_created_at ||= Time.now.utc
        save(validate: false) if self.changed?
      end
    
        str << '\r\n'
    
      def self.checksum(data)
    sum = 0
    data.unpack('C*').each {|c| sum += c }
    sum = ~sum + 1
    sum & 0xff
  end
    
    module Rex
  module Proto
    module Kerberos
      module CredentialCache
        # This class provides a representation of credential times stored in the Kerberos Credential Cache.
        class Time < Element
          # @!attribute auth_time
          #   @return [Integer]
          attr_accessor :auth_time
          # @!attribute start_time
          #   @return [Integer]
          attr_accessor :start_time
          # @!attribute end_time
          #   @return [Integer]
          attr_accessor :end_time
          # @!attribute renew_till
          #   @return [Integer]
          attr_accessor :renew_till
    
              def initialize(options = {})
            self.class.attributes.each do |attr|
              if options.has_key?(attr)
                m = (attr.to_s + '=').to_sym
                self.send(m, options[attr])
              end
            end
          end
    
              # Decodes the start_time field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_start_time(input)
            input.value[0].value
          end
    
              # Decodes the key_type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_type(input)
            input.value[0].value.to_i
          end
    
      def framework_version
    @framework_version ||= `rails -v`[/^Rails (.+)$/, 1]
  end
    
        def initialize
      clear
    end
    
        # Returns the scaling and cropping geometries (in string-based ImageMagick format)
    # neccessary to transform this Geometry into the Geometry given. If crop is true,
    # then it is assumed the destination Geometry will be the exact final resolution.
    # In this case, the source Geometry is scaled so that an image containing the
    # destination Geometry would be completely filled by the source image, and any
    # overhanging image would be cropped. Useful for square thumbnail images. The cropping
    # is weighted at the center of the Geometry.
    def transformation_to dst, crop = false
      if crop
        ratio = Geometry.new( dst.width / self.width, dst.height / self.height )
        scale_geometry, scale = scaling(dst, ratio)
        crop_geometry         = cropping(dst, ratio, scale)
      else
        scale_geometry        = dst.to_s
      end
    
        # Returns the dot+extension of the file. e.g. '.jpg' for 'file.jpg'
    # If the style has a format defined, it will return the format instead
    # of the actual extension. If the extension is empty, no dot is added.
    def dotextension attachment, style_name
      ext = extension(attachment, style_name)
      ext.empty? ? ext : '.#{ext}'
    end