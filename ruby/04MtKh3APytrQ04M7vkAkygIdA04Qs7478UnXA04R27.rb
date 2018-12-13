
        
            def style(opts)
      opts.separator ''
      opts.separator 'Style:'
    
            private
    
            def store_params
          params.require(:store).permit(permitted_store_attributes)
        end
      end
    end
  end
end

    
            def products
          # Returns the products sorted by their position with the classification
          # Products#index does not do the sorting.
          taxon = Spree::Taxon.find(params[:id])
          @products = taxon.products.ransack(params[:q]).result
          @products = @products.page(params[:page]).per(params[:per_page] || 500)
          render 'spree/api/v1/products/index'
        end
    
      FileUtils.chdir('../../..')
end
    
    When /^(?:|I )fill in '([^']*)' for '([^']*)'$/ do |value, field|
  fill_in(field, :with => value)
end
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
        def initialize
      clear
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