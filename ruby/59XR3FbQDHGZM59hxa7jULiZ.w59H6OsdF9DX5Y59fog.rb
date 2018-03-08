
        
          def grant_admin!
    set_permission('admin', true)
  end
    
        ret = route.slice(:location, :label)
    ret[:full_location] = 'adminPlugins.#{ret[:location]}'
    ret
  end
    
      module Sass::Plugin::Configuration
    # Different default options in a m environment.
    def default_options
      @default_options ||= begin
        version = Merb::VERSION.split('.').map {|n| n.to_i}
        if version[0] <= 0 && version[1] < 5
          root = MERB_ROOT
          env  = MERB_ENV
        else
          root = Merb.root.to_s
          env  = Merb.environment
        end
    
            Readline::HISTORY << text
        parse_input(environment, text)
      end
    end