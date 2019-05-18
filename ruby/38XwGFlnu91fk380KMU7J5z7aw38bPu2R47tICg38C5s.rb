
        
        def to_array(proc)
  array = []
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path #{expected.inspect} but it had'
  end
end
    
          it 'supports filtering by read/unread' do
        FactoryGirl.create(:notification, :recipient => alice, :target => @post)
        get :read_all
        FactoryGirl.create(:notification, :recipient => alice, :target => @post)
        get :index, params: {show: 'unread'}
        expect(assigns[:notifications].count).to eq(1)
      end
    end
    
              method == :define_method
        end
    
      config.vm.define :smartos do |smartos|
    smartos.vm.box = 'smartos-base1310-64-virtualbox-20130806.box'
    smartos.vm.box_url = 'http://dlc-int.openindiana.org/aszeszo/vagrant/smartos-base1310-64-virtualbox-20130806.box'
  end
    
        File.write(build_path('packlist'), files.sort.join('\n'))
    
      def unpack_data_to
    'files'
  end
    
          # TODO(sissel): preinstall/postinstall
      # strip @prefix, since BASEDIR will set prefix via the pkginfo file
      IO.popen('pkgproto #{staging_path}/#{@prefix}=').each_line do |line|
        type, klass, path, mode, user, group = line.split
    
        # Add the tar compression flag if necessary
    tar_compression_flag(input_path).tap do |flag|
      args << flag unless flag.nil?
    end
    
    # Use a zip as a package.
#
# This provides no metadata. Both input and output are supported.
class FPM::Package::Zip < FPM::Package