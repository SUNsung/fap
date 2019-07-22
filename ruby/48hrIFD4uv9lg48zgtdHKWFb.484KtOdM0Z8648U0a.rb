
        
          # if rss_url already in existing opml file, use that; otherwise, do a lookup
  rss_url = nil
  if File.exist?(OUTPUT_FILENAME)
    xml = Nokogiri::XML(File.open(OUTPUT_FILENAME))
    existing_blog = xml.xpath('//outline[@htmlUrl='#{web_url}']').first
    if existing_blog
      rss_url = existing_blog.attr('xmlUrl')
      puts '#{name}: ALREADY HAVE'
    end
  end
    
    module Admin
  class PodsController < AdminController
    respond_to :html, :json, :mobile
    
          def redirect_prompt_error_display(error, error_description)
        redirect_params_hash = {error: error, error_description: error_description, state: params[:state]}
        redirect_fragment = redirect_params_hash.compact.map {|key, value| key.to_s + '=' + value }.join('&')
        redirect_to params[:redirect_uri] + '?' + redirect_fragment
      end
    
      respond_to :json
    
        @invalid_emails = html_safe_string_from_session_array(:invalid_email_invites)
    @valid_emails   = html_safe_string_from_session_array(:valid_email_invites)
    
        def line_item_description_text(description_text)
      if description_text.present?
        truncate(strip_tags(description_text.gsub('&nbsp;', ' ').squish), length: 100)
      else
        Spree.t(:product_has_no_description)
      end
    end
    
          def discount
        order.promo_total * exchange_multiplier
      end
    
            if payment_method&.source_required?
          if source
            unless processing?
              if payment_method.supports?(source) || token_based?
                yield
              else
                invalidate!
                raise Core::GatewayError, Spree.t(:payment_method_not_supported)
              end
            end
          else
            raise Core::GatewayError, Spree.t(:payment_processing_failed)
          end
        end
      end
    
              unless inventory_unit.respond_to?(can_event) &&
              inventory_unit.send(can_event)
            render plain: { exception: 'cannot transition to #{@event}' }.to_json,
                   status: 200
            false
          end
        end
    
    have_cpanm = program_exists?('cpanm')
if !have_cpanm
  Cabin::Channel.get('rspec') \
    .warn('Skipping CPAN#input tests because 'cpanm' isn't in your PATH')
end
    
        context 'when :python_fix_name? is false' do
      before :each do
        subject.attributes[:python_fix_name?] = false
      end
    
          it 'should have the correct version' do
        pending('Ruby 1.x and 2.0.x are unsupported for Snap because it lacks Psych::safe_load') if is_old_ruby
        insist { input.version } == original.version
      end
    
        puts 'successfully created #{output}'
  end
ensure
  # defer cleanup until the end
  output_packages.each {|p| p.cleanup}
end

    
        input.conflicts += conflicts
    input.dependencies += dependencies
    input.provides += provides
    input.replaces += replaces
    input.config_files += config_files
    input.directories += directories
    
        # Apply the options for this package on the clamp command
    #
    # Package flags become attributes '{type}-flag'
    #
    # So if you have:
    #
    #     class Foo < FPM::Package
    #       option '--bar-baz' ...
    #     end
    #
    # The attribute value for --foo-bar-baz will be :foo_bar_baz'
    def apply_options(clampcommand)
      @options ||= []
      @options.each do |args|
        flag, param, help, options, block = args
        clampcommand.option(flag, param, help, options, &block)
      end
    end # def apply_options
    
    	    safesystem('pkgdepend', 'resolve',  '-m', build_path('#{name}.p5m.3'))
      safesystem('cp', build_path('#{name}.p5m.3.res'), manifest_fn)
    end