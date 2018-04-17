
        
          def test_redirect_with_header_break
    get :redirect_with_header_break
    assert_response :redirect
    assert_equal 'http://test.host/lolwat', redirect_to_url
  end
    
          def set_body
        self.response_body = 'Success'
      end
    end
    
      class C < A
    helper { def shout; 'C' end }
    
          argument :actions, type: :array, default: [], banner: 'method method'
    
      # any user that is either a moderator or an admin
  def staff?
    admin || moderator
  end
    
    def mkpieces
  piece(0,[],[0])
  $p.each do |a|
    a0 = a[0]
    a[1] = ud(a0)
    a[2] = rl(a0)
    a[3] = ud(rl(a0))
    a[4] = xy(a0)
    a[5] = ud(xy(a0))
    a[6] = rl(xy(a0))
    a[7] = ud(rl(xy(a0)))
    a.sort!
    a.uniq!
  end
  $p.uniq!.sort! {|x,y| x[0] <=> y[0] }
end