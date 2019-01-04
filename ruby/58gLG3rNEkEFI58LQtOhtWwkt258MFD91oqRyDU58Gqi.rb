
        
          it 'can throw an object' do
    lambda {
      obj = Object.new
      catch obj do
        throw obj
      end
    }.should_not raise_error(NameError)
  end
end
    
      it 'does not append line-end if last character is line-end' do
    lambda {
      $VERBOSE = true
      warn('this is some simple text with line-end\n')
    }.should output(nil, 'this is some simple text with line-end\n')
  end
    
        BUNDLE_DIR = ::File.join(LOGSTASH_HOME, 'vendor', 'bundle')
    GEMFILE_PATH = ::File.join(LOGSTASH_HOME, 'Gemfile')
    LOCAL_GEM_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'local_gems')
    CACHE_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'cache')
    LOCKFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile.lock'))
    GEMFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile'))
    
            if explicit_plugins.any? { |spec| filename =~ /^#{spec.name}/ }
          FileUtils.mv(gem_file, ::File.join(explicit_path, filename))
        else
          FileUtils.mv(gem_file, ::File.join(dependencies_path, filename))
        end
      end
    end
    
        puts('Unpacking #{package_file}')
    
        desc 'Halt all VM's involved in the acceptance test round'
    task :halt, :platform do |t, args|
      config   = PlatformConfig.new
      experimental = (ENV['LS_QA_EXPERIMENTAL_OS'].to_s.downcase || 'false') == 'true'
      machines = config.select_names_for(args[:platform], {'experimental' => experimental})
    
            def after_update_attributes
          if params[:order] && params[:order][:coupon_code].present?
            handler = PromotionHandler::Coupon.new(@order)
            handler.apply
    
            def taxonomies
          @taxonomies = Taxonomy.accessible_by(current_ability, :read).order('name').includes(root: :children).
                        ransack(params[:q]).result.
                        page(params[:page]).per(params[:per_page])
        end
    
            def show
          respond_with(user)
        end
    
            def show
          respond_with(zone)
        end
    
        def render(context)
      if parts = @text.match(/([a-zA-Z\d]*) (.*)/)
        gist, file = parts[1].strip, parts[2].strip
      else
        gist, file = @text.strip, ''
      end
      if gist.empty?
        ''
      else
        script_url = script_url_for gist, file
        code       = get_cached_gist(gist, file) || get_gist_from_web(gist, file)
        html_output_for script_url, code
      end
    end
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
      expansion(:inspection) {
    {
      :inspected => o.inspected == 1 ? true : false,
      :spam => o.spam == 1 ? true : false,
      :spam_score => o.spam_score.to_f,
      :threat => o.threat == 1 ? true : false,
      :threat_details => o.threat_details
    }
  }
    
      def destroy
    @http_endpoint.destroy
    redirect_to_with_json [organization, @server, :http_endpoints]
  end
    
      include WithinOrganization
    
        if @user.save
      if email_changed
        redirect_to_with_json verify_path(:return_to => settings_path), :notice => 'Your settings have been updated successfully. As you've changed, your e-mail address you'll need to verify it before you can continue.'
      else
        redirect_to_with_json settings_path, :notice => 'Your settings have been updated successfully.'
      end
    else
      render_form_errors 'edit', @user
    end
  end