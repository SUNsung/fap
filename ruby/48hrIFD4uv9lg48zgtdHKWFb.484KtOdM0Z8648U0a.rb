  def resource
    @resource ||=
      if params[:project_id].present?
        Project.find(params[:project_id])
      elsif params[:namespace_id].present?
        Group.find(params[:namespace_id])
      end
  end
    
      def all_groups(current_user)
    groups = []
    
    describe :string_unpack_16bit_le_unsigned, shared: true do
  it 'decodes a short with most significant bit set as a positive number' do
    '\x00\xff'.unpack(unpack_format()).should == [65280]
  end
end
    
      it 'decodes the number of characters specified by the count modifier' do
    [ ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U1', [0x80]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U2', [0x80, 0x81]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U3', [0x80, 0x81, 0x82]]
    ].should be_computed_by(:unpack)
  end
    
      guard -> {
    with_timezone 'right/UTC' do
      (Time.gm(1972, 6, 30, 23, 59, 59) + 1).sec == 60
    end
  } do
    it 'handles real leap seconds in zone 'right/UTC'' do
      with_timezone 'right/UTC' do
        time = Time.send(@method, 1972, 6, 30, 23, 59, 60)
    
            sign_in user, scope: :user
      end
    
          opts.on('--old', 'Output the old-style ':prop val' property syntax.',
                       'Only meaningful when generating Sass.') do
        @options[:for_tree][:old] = true
      end
    end