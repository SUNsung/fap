
        
            # Get the implementation class for the given Converter.
    # Returns the Converter instance implementing the given Converter.
    # klass - The Class of the Converter to fetch.
    def find_converter_instance(klass)
      @find_converter_instance ||= {}
      @find_converter_instance[klass] ||= begin
        converters.find { |converter| converter.instance_of?(klass) } || \
          raise('No Converters found for #{klass}')
      end
    end
    
        context 'include tag with variable and liquid filters' do
      setup do
        site = fixture_site('pygments' => true).tap(&:read).tap(&:render)
        post = site.posts.docs.find do |p|
          p.basename.eql? '2013-12-17-include-variable-filters.markdown'
        end
        @content = post.output
      end
    
      p.action do |args, _|
    if args.empty?
      Jekyll.logger.error 'A subcommand is required.'
      puts p
      abort
    else
      subcommand = args.first
      unless p.has_command? subcommand
        Jekyll.logger.abort_with 'fatal: 'jekyll #{args.first}' could not' \
          ' be found. You may need to install the jekyll-#{args.first} gem' \
          ' or a related gem to be able to use this subcommand.'
      end
    end
  end
end

    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
      def send_reset_password_instructions
    Workers::ResetPassword.perform_async(self.id)
  end
    
          def render_error(error_description, detailed_error=nil)
        @error_description = error_description
        @detailed_error = detailed_error
        if request.format == :mobile
          render 'api/openid_connect/error/error.mobile', layout: 'application.mobile'
        else
          render 'api/openid_connect/error/error', layout: 'with_header_with_footer'
        end
      end
    end
  end
end

    
        redirect_to stream_path
  end
end

    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
      def like_service
    @like_service ||= LikeService.new(current_user)
  end
end
