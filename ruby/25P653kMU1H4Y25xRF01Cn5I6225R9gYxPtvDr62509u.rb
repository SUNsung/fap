
        
                It is possible to specify a list of dependencies which will be used by
        the template in the `Podfile.default` (normal targets) `Podfile.test`
        (test targets) files which should be stored in the
        `~/.cocoapods/templates` folder.
      DESC
      self.arguments = [
        CLAide::Argument.new('XCODEPROJ', :false),
      ]
    
        # Returns the public URL of the attachment with a given style. This does
    # not necessarily need to point to a file that your Web server can access
    # and can instead point to an action in your app, for example for fine grained
    # security; this has a serious performance tradeoff.
    #
    # Options:
    #
    # +timestamp+ - Add a timestamp to the end of the URL. Default: true.
    # +escape+    - Perform URI escaping to the URL. Default: true.
    #
    # Global controls (set on has_attached_file):
    #
    # +interpolator+  - The object that fills in a URL pattern's variables.
    # +default_url+   - The image to show when the attachment has no image.
    # +url+           - The URL for a saved image.
    # +url_generator+ - The object that generates a URL. Default: Paperclip::UrlGenerator.
    #
    # As mentioned just above, the object that generates this URL can be passed
    # in, for finer control. This object must respond to two methods:
    #
    # +#new(Paperclip::Attachment, options_hash)+
    # +#for(style_name, options_hash)+
    
      def pretty?
    params.has_key?('pretty')
  end
    
            end
      end
    end
  end
end

    
    module LogStash
  module Api
    class Service
      include LogStash::Util::Loggable