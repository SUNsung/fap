
        
            def root_page?
      subpath.blank? || subpath == '/' || subpath == root_path
    end
    
        def parse_as_fragment
      Nokogiri::HTML.fragment @content, 'UTF-8'
    end
  end
end

    
          def process_response(response)
        original_scheme = self.base_url.scheme
        original_host = self.base_url.host
        original_path = self.base_url.path
    
        def self.subscribe_to(notifier)
      attach_to(namespace, new, notifier)
    end
    
          def include_default_entry?
        INDEX.add?([name, type].join(';')) ? true : false # ¯\_(ツ)_/¯
      end
    
            css('ul.methods', 'ul.properties', 'ul.events').add_class('defs').each do |node|
          node.css('> li > h3').each do |h3|
            next if h3.content.present?
            h3.content = h3.next_element.content
            h3.next_element.remove
          end
        end
      end
    end
  end
end

    
        file package(gem, '.tar.gz') => ['pkg/'] do |f|
      sh <<-SH
        git archive \
          --prefix=#{gem}-#{source_version}/ \
          --format=tar \
          HEAD -- #{directory} | gzip > #{f.name}
      SH
    end
  end
    
          def call(env)
        status, headers, body = @app.call(env)
        header = options[:report_only] ? 'Content-Security-Policy-Report-Only' : 'Content-Security-Policy'
        headers[header] ||= csp_policy if html? headers
        [status, headers, body]
      end
    end
  end
end

    
          alias react deny
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
    Given 'I remove turbolinks' do
  cd('.') do
    transform_file('app/assets/javascripts/application.js') do |content|
      content.gsub('//= require turbolinks', '')
    end
    transform_file('app/views/layouts/application.html.erb') do |content|
      content.gsub(', 'data-turbolinks-track' => true', '')
    end
  end
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
    
      def safe_params
    params.require(:address_endpoint).permit(:address)
  end
    
      def render_form_errors(action_name, object)
    respond_to do |wants|
      wants.html { render action_name }
      wants.json { render :json => {:form_errors => object.errors.full_messages}, :status => 422 }
    end
  end
    
      before_action :admin_required
  before_action { params[:id] && @ip_pool = IPPool.find_by_uuid!(params[:id]) }
    
      include WithinOrganization
    
      def finish_password_reset
    @user = User.where(:password_reset_token => params[:token]).where('password_reset_token_valid_until > ?', Time.now).first
    if @user.nil?
      redirect_to login_path(:return_to => params[:return_to]), :alert => 'This link has expired or never existed. Please choose reset password to try again.'
    end
    
          # Return the set of batch actions that should be displayed
      def batch_actions_to_display
        @batch_actions.select do |batch_action|
          call_method_or_proc_on(self, batch_action.display_if_block)
        end
      end