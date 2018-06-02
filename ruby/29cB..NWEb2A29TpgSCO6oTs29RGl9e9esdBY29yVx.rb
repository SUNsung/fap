
        
            valid_oauth_providers :evernote
    
      included do
    helper SortableTableHelper
  end
    
      private
    
          @account.reset_avatar!
      @account.reset_header!
      @account.save!
    
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