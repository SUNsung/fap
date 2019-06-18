
        
          # This method is called when weak warning is produced by the parser.
  # +fmt+ and +args+ is printf style.
  def warn(fmt, *args)
  end
    
          # Only uses first 29 characters of salt
      'mypassword'.crypt('$2a$04$0WVaz0pV3jzfZ5G5tpmHWuB').should == '$2a$04$0WVaz0pV3jzfZ5G5tpmHWuBQGbkjzgtSc3gJbmdy0GAGMa45MFM2.'
    end
    
          Thread.pass until port
    
      it 'initializes a new UDPSocket using an Integer' do
    @socket = UDPSocket.new(Socket::AF_INET)
    @socket.should be_an_instance_of(UDPSocket)
  end
    
        def on_comma(tok, data)
      @lex_state = EXPR_BEG | EXPR_LABEL if (EXPR_ARG_ANY & @lex_state) != 0
      data << Token.new(lineno, column, __method__, tok, @lex_state)
    end
    
          open('iso-2022-jp.txt', 'wb:iso-2022-jp', xml: :attr) {|f| f.print '&<>'\''; f.puts '\u4E02\u3042' }
      content = File.read('iso-2022-jp.txt', :mode=>'rb:ascii-8bit')
      assert_equal('\'&amp;&lt;&gt;&quot;'&#x4E02;\e$B$\'\e(B\n\''.force_encoding('ascii-8bit'), content)
    
      def test_new_method_on_subclass
    sub = FooSub.new
    assert_raise(NoMethodError) { sub.z }
    assert_equal('FooExt#z', FooExtClient.invoke_z_on(sub))
    assert_raise(NoMethodError) { sub.z }
  end
    
      def test_ungetc2
    f = false
    pipe(proc do |w|
      Thread.pass until f
      w.write('1' * 10000)
      w.close
    end, proc do |r|
      r.ungetc('0' * 10000)
      f = true
      assert_equal('0' * 10000 + '1' * 10000, r.read)
    end)
  end
    
            def self.options
          [[
            '--short', 'Only print the path relative to the cache root'
          ]].concat(super)
        end
    
        # regression tests for https://github.com/spree/spree/issues/6888
    context 'per page dropdown', js: true do
      before do
        select '45', from: 'per_page'
        wait_for_ajax
        expect(page).to have_select('per_page', selected: '45')
        expect(page).to have_selector(:css, 'select.per-page-selected-45')
      end
    
          @@stock_location_attributes = [
        :id, :name, :address1, :address2, :city, :state_id, :state_name,
        :country_id, :zipcode, :phone, :active
      ]
    
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
    
        def raise_because_imagemagick_missing
      raise Errors::CommandNotFoundError.new('Could not run the `identify` command. Please install ImageMagick.')
    end
  end
end

    
        # Returns the timestamp as defined by the <attachment>_updated_at field
    # in the server default time zone unless :use_global_time_zone is set
    # to false.  Note that a Rails.config.time_zone change will still
    # invalidate any path or URL that uses :timestamp.  For a
    # time_zone-agnostic timestamp, use #updated_at.
    def timestamp attachment, style_name
      attachment.instance_read(:updated_at).in_time_zone(attachment.time_zone).to_s
    end