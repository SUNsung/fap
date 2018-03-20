
        
            def initialize(options = {})
      @id = options[:id]
      @agent = options[:agent]
      @config = options[:config]
      @restarting = false
    end
    
      def table_sort
    raise('You must call set_table_sort in any action using table_sort.') unless @table_sort_info.present?
    @table_sort_info[:order]
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
    
        # Returns the pluralized form of the attachment name. e.g.
    # 'avatars' for an attachment of :avatar
    def attachment attachment, style_name
      plural_cache.pluralize_symbol(attachment.name)
    end
    
    module Paperclip
  class << self
    attr_writer :registered_attachments_styles_path
    def registered_attachments_styles_path
      @registered_attachments_styles_path ||= Rails.root.join('public/system/paperclip_attachments.yml').to_s
    end
  end
    
            attachment_names.each do |attachment_name|
          COLUMNS.keys.each do |column_name|
            remove_column(table_name, '#{attachment_name}_#{column_name}')
          end
        end
      end