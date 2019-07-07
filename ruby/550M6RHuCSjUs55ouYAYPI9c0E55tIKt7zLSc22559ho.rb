
        
        def pr(url)
  if url.end_with?(FORWARD_SLASH)
    url
  else
    url_dir = File.dirname(url)
    url_dir.end_with?(FORWARD_SLASH) ? url_dir : '#{url_dir}/'
  end
end
    
        # If you've clearned the pin, use bumped_at, otherwise put it at the top
    def order_nocategory_with_pinned_sql
      -'CASE
        WHEN topics.pinned_globally
         AND (COALESCE(topics.pinned_at, '#{lowest_date}') > COALESCE(tu.cleared_pinned_at, '#{lowest_date}'))
          THEN topics.pinned_at + interval '9999 years'
          ELSE topics.bumped_at
       END DESC'
    end
    
        # a poor man's upsert
    id = where(date: date, req_type: req_type_id).pluck(:id).first
    id ||= create!(date: date, req_type: req_type_id, count: 0).id
    
        it 'rejects invalid directives and ones that are not allowed to be extended' do
      builder << {
        invalid_src: ['invalid'],
      }
    
          @directives.each do |directive, sources|
        if sources.is_a?(Array)
          policy.public_send(directive, *sources)
        else
          policy.public_send(directive, sources)
        end
      end
    
        def find_theme_extensions(theme_ids)
      extensions = []
    
          render plain: svg_sprite, disposition: nil, content_type: 'application/javascript'
    end
  end
    
              io.close if io rescue nil
    
    module Docs
  class PageDb
    attr_reader :pages
    
        private
    
            css('.example-title + pre').each do |node|
          node['name'] = node.previous_element.content.strip
          node.previous_element.remove
        end
    
      # Get message for given
  def find_message(kind, options = {})
    options[:scope] ||= translation_scope
    options[:default] = Array(options[:default]).unshift(kind.to_sym)
    options[:resource_name] = resource_name
    options = devise_i18n_options(options)
    I18n.t('#{options[:resource_name]}.#{kind}', options)
  end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
              if mod.const_defined?('ClassMethods')
            class_mod = mod.const_get('ClassMethods')
            extend class_mod
    
      def after_sign_in_path_for(resource)
    if resource.email_verified?
      root_path
    else
      finish_signup_path
    end
  end
end

    
      private
    
          def right_diff_line_number(id, line)
        if line =~ /^@@/
          m, ri                   = *line.match(/\+(\d+)/)
          @right_diff_line_number = ri.to_i
          @current_line_number    = @right_diff_line_number
          ret                     = '...'
        elsif line[0] == ?-
          ret = ' '
        elsif line[0] == ?+
          ret                     = @right_diff_line_number.to_s
          @right_diff_line_number += 1
          @current_line_number    = @right_diff_line_number - 1
        else
          ret                     = @right_diff_line_number.to_s
          @right_diff_line_number += 1
          @current_line_number    = @right_diff_line_number - 1
        end
        ret
      end
    end
  end
end

    
          def allow_uploads
        @allow_uploads
      end
    
          def string_to_code string
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
      def for_each_gem
    SPREE_GEMS.each do |gem_name|
      yield 'pkg/spree_#{gem_name}-#{version}.gem'
    end
    yield 'pkg/spree-#{version}.gem'
  end
    
            def order_id
          super || params[:id]
        end
      end
    end
  end
end

    
            # Dynamically defines our stores checkout steps to ensure we check authorization on each step.
        Order.checkout_steps.keys.each do |step|
          define_method step do
            find_order
            authorize! :update, @order, params[:token]
          end
        end