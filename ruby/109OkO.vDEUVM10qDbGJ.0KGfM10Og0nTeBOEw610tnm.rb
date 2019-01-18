
        
        DATA = {'foo'=>'bar', 'alpha'=>{'beta'=>'gamma'}, 'lipsum'=>['lorem', 'ipsum', 'dolor']}
    
    
def pathutil_relative
  Pathutil.new(DOC_PATH).relative_path_from(COL_PATH).to_s
end
    
        To install Clojure you should install Leiningen:
      brew install leiningen
    and then follow the tutorial:
      https://github.com/technomancy/leiningen/blob/stable/doc/TUTORIAL.md
    EOS
  when 'osmium' then <<-EOS.undent
    The creator of Osmium requests that it not be packaged and that people
    use the GitHub master branch instead.
    EOS
  when 'gfortran' then <<-EOS.undent
    GNU Fortran is now provided as part of GCC, and can be installed with:
      brew install gcc
    EOS
  when 'play' then <<-EOS.undent
    Play 2.3 replaces the play command with activator:
      brew install typesafe-activator
    
        if ARGV.ignore_deps?
      @deps = []
      @reqs = []
    else
      @deps = expand_deps
      @reqs = expand_reqs
    end
  end
    
      # @private
  def unused_options
    @options - @args
  end
    
        root.children.sort.each do |pn|
      if pn.directory?
        dirs << pn
      elsif block_given? && yield(pn)
        puts pn
        other = 'other '
      else
        remaining_root_files << pn unless pn.basename.to_s == '.DS_Store'
      end
    end
    
              subtree, file = File.split(object['path'])
    
              # If we asked for reversed ordering, then reverse it
          vms.reverse! if options[:reverse]
    
            if rest.empty?
          current_rule.children += child.children
        else
          rest.unshift Sass::Selector::Parent.new
          child.parsed_rules = make_sseq(sseq.subject?, *rest)
          current_rule << child
        end
    
        # function
    # Sass::Callable
    inherited_hash_reader :function
    
        context 'and a comment after the last element' do
      let(:b_comment) { ' # comment b' }
    
          # Returns the value of this `hash` element.
      #
      # @note For keyword splats, this returns the whole node
      #
      # @return [Node] the value of the hash element
      def value
        node_parts[1]
      end
    
    When /^(?:|I )fill in '([^']*)' with '([^']*)'$/ do |field, value|
  fill_in(field, :with => value)
end
    
      def generate_migration
    migration_template('paperclip_migration.rb.erb',
                       'db/migrate/#{migration_file_name}',
                       migration_version: migration_version)
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
    
        def geometry_string
      begin
        orientation = Paperclip.options[:use_exif_orientation] ?
          '%[exif:orientation]' : '1'
        Paperclip.run(
          Paperclip.options[:is_windows] ? 'magick identify' : 'identify',
          '-format '%wx%h,#{orientation}' :file', {
            :file => '#{path}[0]'
          }, {
            :swallow_stderr => true
          }
        )
      rescue Terrapin::ExitStatusError
        ''
      rescue Terrapin::CommandNotFoundError => e
        raise_because_imagemagick_missing
      end
    end
    
        # Hash assignment of interpolations. Included only for compatibility,
    # and is not intended for normal use.
    def self.[]= name, block
      define_method(name, &block)
      @interpolators_cache = nil
    end