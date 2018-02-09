
        
            attr_accessor :name, :type, :path
    
    Given an Application (app) bundle directory on disk, find all
login items associated with that app, which you can use in a
Cask uninstall stanza, eg
    
    
require 'uri'
require 'cgi'
require File.expand_path(File.join(File.dirname(__FILE__), '..', 'support', 'paths'))
require File.expand_path(File.join(File.dirname(__FILE__), '..', 'support', 'selectors'))
    
        # resize to a new geometry
    # @param geometry [String] the Paperclip geometry definition to resize to
    # @example
    #   Paperclip::Geometry.new(150, 150).resize_to('50x50!')
    #   #=> Paperclip::Geometry(50, 50)
    def resize_to(geometry)
      new_geometry = Paperclip::Geometry.parse geometry
      case new_geometry.modifier
      when '!', '#'
        new_geometry
      when '>'
        if new_geometry.width >= self.width && new_geometry.height >= self.height
          self
        else
          scale_to new_geometry
        end
      when '<'
        if new_geometry.width <= self.width || new_geometry.height <= self.height
          self
        else
          scale_to new_geometry
        end
      else
        scale_to new_geometry
      end
    end
    
            def matches? subject
          @subject = subject
          @subject = @subject.new if @subject.class == Class
          lower_than_low? && higher_than_low? && lower_than_high? && higher_than_high?
        end
    
      context 'called with arguments (1, $ratio: $golden-ratio)' do
    it 'output the first value from the golden ratio scale' do
      expect('.one-golden-ratio').to have_rule('font-size: 1.618em')
    end
  end