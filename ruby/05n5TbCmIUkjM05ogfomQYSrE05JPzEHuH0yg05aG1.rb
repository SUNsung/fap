
        
          def empty?
    caveats.empty?
  end
    
      def observe_file_removal(path)
    path.extend(ObserverPathnameExtension).unlink if path.exist?
  end
    
            file_is_stale = if PkgVersion === version
          f.pkg_version > version
        else
          f.version > version
        end
    
        # Unbrewed uses the PREFIX, which will exist
    # Things below use the CELLAR, which doesn't until the first formula is installed.
    unless HOMEBREW_CELLAR.exist?
      raise NoSuchKegError.new(ARGV.named.first) if ARGV.named.any?
      return
    end
    
                case platform
            when 'iOS' then self.platform :ios, '10.0'
            when 'macOS' then self.platform :macos, '10.10'
            end
    
              If there is multiple cache for various versions of the requested pod,
          you will be asked which one to clean. Use `--all` to clean them all.
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
    Liquid::Template.register_tag('video', Jekyll::VideoTag)
    
          def gateway_error(exception)
        @order.errors.add(:base, exception.message)
        invalid_resource!(@order)
      end
    
                if handler.error.present?
              @coupon_message = handler.error
              respond_with(@order, default_template: 'spree/api/v1/orders/could_not_apply_coupon', status: 422)
              return true
            end
          end
          false
        end
    
            def inventory_unit
          @inventory_unit ||= InventoryUnit.accessible_by(current_ability, :read).find(params[:id])
        end
    
            def stock_location_params
          params.require(:stock_location).permit(permitted_stock_location_attributes)
        end
      end
    end
  end
end
