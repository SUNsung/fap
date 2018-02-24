      key = Spaceship::Portal::Key.find('some-key-id')
      expect(key).to be_instance_of(Spaceship::Portal::Key)
      expect(key.id).to eq('some-key-id')
    end
  end
    
        def self.last_git_tag_name(match_lightweight = true, tag_match_pattern = nil)
      tag_pattern_param = tag_match_pattern ? '=#{tag_match_pattern.shellescape}' : ''
    
          if valid_type?(type)
        type.constantize.new(attributes).tap do |instance|
          instance.user = user if instance.respond_to?(:user=)
        end
      else
        const_get(:BASE_CLASS_NAME).constantize.new(attributes).tap do |instance|
          instance.type = type
          instance.user = user if instance.respond_to?(:user=)
        end
      end
    end
  end
end
    
        def logger
      return super unless dry_run?
      @dry_run_logger
    end
    
      def tumblr_consumer_key
    ENV['TUMBLR_OAUTH_KEY']
  end
    
              result
        end
    
    module Vagrant
  module Util
    # This class is used to render the ERB templates in the
    # `GEM_ROOT/templates` directory.
    class TemplateRenderer < OpenStruct
      class << self
        # Render a given template and return the result. This method optionally
        # takes a block which will be passed the renderer prior to rendering, which
        # allows the caller to set any view variables within the renderer itself.
        #
        # @return [String] Rendered template
        def render(*args)
          render_with(:render, *args)
        end
    
          format.json do
        @statuses = Status.as_tag_timeline(@tag, current_account, params[:local]).paginate_by_max_id(20, params[:max_id])
        @statuses = cache_collection(@statuses, Status)
    
          it 'renders application layout' do
        get :show, params: { id: 'test', max_id: late.id }
        expect(response).to render_template layout: 'application'
      end
    end
    
      def name
    ':#{object.shortcode}:'
  end
end

    
      before do
    sign_in user, scope: :user
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
    
        def self.plural_cache
      @plural_cache ||= PluralCache.new
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